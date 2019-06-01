//implementing max heap sort and max priority queue
#include<iostream>
using namespace std;
void max_heapify (int Arr[ ], int i, int N);  //to reheap the heap if any node violates the property of heap
void build_maxheap (int Arr[ ],int N);  //to build the heap from the inputted array
void heap_sort(int Ar[ ],int N);   //for sorting the array uisng heap sort
int get_priority_ele(int Arr[ ],int &N);  //for priority wise deletion
int main(){
	int arr[20];
	cout<<"Enter the number of elements : ";
	int size;
	cin>>size;
	for(int i=1;i<=size;i++)
	cin>>arr[i];
	cout<<"Inputted Data : ";
	for(int i=1;i<=size;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	build_maxheap(arr,size);
	cout<<"Heap Tree \n";
	for(int i=1;i<=size;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"Heap Sort And Priority Queue "<<endl;
	char choice;
	int ord,i;
	do{
		cout<<"1.Heap Sort\n2.Get priority Element\n3.Print the contents of the array\n";
		cin>>ord;
		switch(ord){
			case 1: heap_sort(arr,size); break;
			case 2: cout<<"Priority Element : "<<get_priority_ele(arr,size)<<endl; break;
			case 3: cout<<"Array contents : ";
			        for(i=1;i<=size;i++)
			        cout<<arr[i]<<" ";
			        cout<<endl;
			        break;
			default : cout<<"Enter a valid choice : ";
		}
		cout<<"Wannna continue ? if Yes press Y ";
		cin>>choice;
	}while(choice=='Y'||choice=='y');
}
void max_heapify(int Arr[],int i,int N){
	int largest;
	int left = 2*i;                  //left child
    int right = 2*i +1;          //right child
    if(left<= N && Arr[left] > Arr[i] )
          largest = left;
    else
         largest = i;
    if(right <= N && Arr[right] > Arr[largest] )
        largest = right;
    if(largest != i ){
    	int temp=Arr[i];
    	Arr[i]=Arr[largest];
    	Arr[largest]=temp;
        max_heapify (Arr, largest,N);
    }
}
void build_maxheap (int Arr[ ],int N){// In this function we would use the fact that leaf nodes are at N/2+1, N/2+2, . . . upto N
	for(int i=N/2;i>=1;i--){
		max_heapify(Arr,i,N);
	}	
}
void heap_sort(int Arr[],int N){
	int heap_size=N;
	build_maxheap(Arr,N);
    for(int i = N; i>=2 ; i-- ){
        int temp=Arr[1];
        Arr[1]=Arr[i];
        Arr[i]=temp;
        heap_size--;
        max_heapify(Arr, 1, heap_size);
    }
}
int get_priority_ele(int Arr[ ],int &N){
	int prior=Arr[1];
	if(N<=0){
        cout<<"Ooops!!!! priority queue is empty ";
        return -1;
    }
    Arr[1] = Arr[N];
    N--;
    max_heapify(Arr, 1,N);
    return prior;
}