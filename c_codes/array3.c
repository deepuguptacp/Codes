#include<stdio.h>
int main(){
    int a[3][3], i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\n Enter the %d%d element of the matrix :  ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}