#include <stdio.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <fcntl.h> 

int main(){ 
    char arr[100]; 
    int n = 3;
    int f_write = open("input.txt", O_RDONLY); 
    int f_read = open("output.txt", O_WRONLY); 
  
    int count = 0; 

    while (read(f_write, arr, 1)) {
        if (count < n) { 
            lseek (f_write, n, SEEK_CUR); 
            write (f_read, arr, 1); 
            count = n; 
        }
        else{ 
            count = (2*n); 
            lseek(f_write, count, SEEK_CUR); 
            write(f_read, arr, 1); 
        } 
    } 
    close(f_write); 
    close(f_read); 
    return 0; 
} 