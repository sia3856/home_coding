#include <stdio.h>
#include <unistd.h> 


int main() {
    printf("Loading:");
    
    for (int i = 0; i < 30; i++) {
        printf("█");   
        fflush(stdout);
        usleep(100000); 
    }
    
    printf(" 로딩완료\n");
}
