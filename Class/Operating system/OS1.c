#include<stdio.h>
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h>
int main(){ 
    int fd1 = open("input.txt", O_RDONLY);
    int fd2 = creat("Output.txt", O_RDWR);
    int fd3 = fd2;
    printf("fd1 = %d", fd1);
    close(fd1);
    printf("\n\nfd1 = %d", fd1);
    lseek(fd1, c, sizeof(int))
    
    printf("\n");
    return 0;
}