#include <stdio.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <fcntl.h>
int main(){
    char arr[100]; 
    int n; 
    n = 5; 
    int fd1 = open("input.txt", O_RDONLY); 
    int fd2 = open("end.txt", O_WRONLY); 
  
    int count = 0; 
    while (read(fd1, arr, 1)){ 
        if (count < n){ 
            lseek (fd1, n, SEEK_CUR); 
            write (fd2, arr, 1); 
            count = n; 
        }
        else{ 
            count = (2*n); 
            lseek(fd1, count, SEEK_CUR); 
            write(fd2, arr, 1); 
        } 
    } 
    close(fd1); 
    close(fd2);
    return 0;
}