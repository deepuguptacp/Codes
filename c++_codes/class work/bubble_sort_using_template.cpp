#include<iostream>
using namespace std;
template<class T>               //  Declaration of the template class.
class bubble_sort{              //  Declaration of the class.
    T num[6];
    public :
        bubble_sort(T b[]){     //  Default constructor to assign the array values.
            int i=0;
            for(i=0; i<6; i++)
                num[i]=b[i];
        }
        void sort(){            // Function for sirting.
            int i, j;
            T temp;
            for(i=0; i<6; i++){
                for(j=i; j<6; j++){
                    if(num[i]>=num[j]){
                        temp=num[i];
                        num[i]=num[j];
                        num[j]=temp;
                    }
                }
            }
        }
        void display(){         // Funtiom to display the output.
            int i;
            cout<<"\nAfter Sorting....\n";
            for(i=0; i<6; i++)
                cout<<num[i]<<"\t";
            cout<<"\n";
        }
};
int main(){
    int A[6], i;
    cout<<"Enter the value of the elemnts of integer type : ";
    for(i=0; i<6; i++)
        cin>>A[i];
    bubble_sort<int> p(A);         // Object of integer data type.
    p.sort();
    float B[6];
    cout<<"Enter the value of the elemnts of float type : ";
    for(i=0; i<6; i++)
        cin>>B[i];    
    bubble_sort<float> q(B);        // Object of float data type.
    q.sort();
    cout<<"\n\n";
    p.display();
    q.display();
}