#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <pthread.h>
	
#define BUF_SIZE 100

	
void * send_msg(void * arg);
void * recv_msg(void * arg);
void error_handling(char * msg);
	

char msg[BUF_SIZE];
	
int main(int argc, char *argv[])
{
	int sock;
	struct sockaddr_in serv_addr;
	pthread_t snd_thread, rcv_thread;
	void * thread_return;
	if(argc!=3) {
		printf("Usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	 }
	
	
	sock=socket(PF_INET, SOCK_STREAM, 0);
	
	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_addr.s_addr=inet_addr(argv[1]);
	serv_addr.sin_port=htons(atoi(argv[2]));
	  
	if(connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr))==-1)
		error_handling("connect() error");
	
	pthread_create(&snd_thread, NULL, send_msg, (void*)&sock);
	pthread_create(&rcv_thread, NULL, recv_msg, (void*)&sock);
	pthread_join(snd_thread, &thread_return);
	pthread_join(rcv_thread, &thread_return);
	close(sock);  
	return 0;
}
	
void * send_msg(void * arg)   // send thread main
{
	int sock=*((int*)arg);
	char name_msg[BUF_SIZE];
	while(1) 
	{
		fgets(msg, BUF_SIZE, stdin);
		if(!strcmp(msg,"Q\n")||!strcmp(msg,"q\n")||!strcmp(msg,"/로그아웃\n")) 
		{
			sprintf(name_msg,"%s",msg);
			write(sock, name_msg, strlen(name_msg));
			printf("로그아웃을 합니다.\n");
			close(sock);
			exit(0);
		}
		else if(!strcmp(msg,"/help\n")||!strcmp(msg,"/?\n"))
		{
			printf("\t\t\t명령어\n\n\t귓속말 : /w 상대방닉네임 메시지\n\n\t쪽지함 : /쪽지\n\n\t방이동 : /r\n\n\t회원탈퇴 : /회원탈퇴\n\n\t채팅종료 : /로그아웃\n\n");
			continue;
		}
		sprintf(name_msg,"%s",msg);
		write(sock, name_msg, strlen(name_msg));
	}
	return NULL;
}
	
void * recv_msg(void * arg)   // read thread main
{
	int sock=*((int*)arg);
	char name_msg[BUF_SIZE];
	int str_len;
	while(1)
	{
		str_len=read(sock, name_msg,BUF_SIZE-1);
		if(str_len==-1) 
			return (void*)-1;
		name_msg[str_len]=0;
		fputs(name_msg, stdout);
	}
	return NULL;
}
	
void error_handling(char *msg)
{
	fputs(msg, stderr);
	fputc('\n', stderr);
	exit(1);
}