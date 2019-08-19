#include<stdio.h>
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h>
int main(){ 
    int fd0 = open("input.txt", O_RDONLY);         
    int fd1 = creat("output.txt", O_RDWR); 
    char *c;
    while(read(fd0, c, sizeof(char))){
        write(fd1, c, sizeof(char));
    }
    return 0; 
}