/*
 * C++ Program for quick sort.
*/
#include <stdio.h>
void quicksort (int [], int, int);   // Declaration of function for quick sort.
/*
 * Main: Conatins Menu
*/
int main(){
    int list[50];
    int size, i; 
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }
    quicksort(list, 0, size - 1);
    printf("\nAfter applying quick sort\n");
    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n"); 
    return 0;
}
/*
 *  Pivot:- Fixed position on the left numbers less than it are present and on the right
            numbers greater than it are present
 *  low:-   Lower index of incoming array.
 *  high:-  Upper index of the incoming array.
 *  list[]:-Array to be sorted.
*/
void quicksort(int list[], int low, int high){
    int pivot, i, j, temp;
    if (low < high) {
        pivot = low;
        i = low;
        j = high;
    while (i < j) {
        while (list[i] <= list[pivot] && i <= high) {
            i++;
        }
        while (list[j] > list[pivot] && j >= low) {
            j--;
        }
        if (i < j) {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
        }
    }
    temp = list[j];
    list[j] = list[pivot];
    list[pivot] = temp;
    printf("\nAt this step : \n");
    for(i=0; i<high; i++)
        printf("%d    ", list[i]);
    quicksort(list, low, j - 1);        // Recursive call of the function.
    quicksort(list, j + 1, high);       // Recursive call of the function.
    }
}