0#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int _min(int a, int b) {
    int num = (a > b) ? b : a;
    return num;
}

int _max(int a, int b) {
    int num = (a > b) ? a : b;
    return num;
}

int getMinimum(int* arr, int size, int minimum) {
    for(int i =0; i < size; i++) {
        minimum  = _min(minimum, arr[i]);
    }
    return minimum;
}

int getMaximum(int* arr, int size, int maximum) {
    for(int i =0; i < size; i++) {
        maximum  = _max(maximum, arr[i]);
    }
    return maximum;
}

int main(){
    int i, sizeOfArray; 
    int minimum = INT_MAX; 
    int maximum = INT_MIN;
    printf("Enter size of Array: ");
    scanf("%d", &sizeOfArray);
    int *numberArray = (int *) malloc(sizeOfArray * sizeof (int));

    for(i=0; i<sizeOfArray; i++){
        printf("\nEnter %d element of array : ", i+1);
        scanf("%d", (numberArray + i));
    }

    printf("maximum is: %d\n", getMaximum(numberArray, sizeOfArray, maximum));

    printf("minimum is: %d\n", getMinimum(numberArray, sizeOfArray, minimum ));
    return 0;
}
