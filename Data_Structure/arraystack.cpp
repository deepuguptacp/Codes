#include<stdio.h>
#include<stdlib.h>
int ar[10];
int top=-1;
int push()
{ 
    int item,i;
    if(top>=10){
        printf("Stack overflow...no element can be inserted : ");
    }
    else{
        printf("Enter the data to be inserted : ");
        scanf("%d",&item);
        top=top+1;
        ar[top]=item;
    }
}
void pop(){
    int rand;
    if(top==-1){
        printf("The stack is empty : ");
    }
    else{
        rand=ar[top];
        top=top-1;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("No list to display.");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d->",ar[i]);
        }
    }
}
int main(){
    int ch;
    do{
        printf("\n1. Push \n2. Pop \n3. Display \n4. Exit");
        printf("\n Enter ur choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2 :
            pop();
            break;
            case 3 :
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("invalid choice.");
        }
    }while(1);
    return 0;
}



