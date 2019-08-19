#include<stdio.h>
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h>
int main(){ 
    int fd1 = open("input.txt", O_RDONLY);         
    int fd2 = creat("output.txt", O_RDWR); 
    char *c;
    while(read(fd1, c, sizeof(char))){
        write(fd2, c, sizeof(char));
    }
    return 0; 
}