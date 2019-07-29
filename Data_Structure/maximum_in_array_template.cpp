#include<iostream>
using namespace std;
template<class T>               // Declaration of template.
class maximum{                  // Declaration of the class.
    T num[6], max;
    public :
        maximum(T b[]){         // Default constructor.
            max=0;
            int i=0;
            for(i=0; i<6; i++)
                num[i]=b[i];
        }
        void find_maximum(){    // Fuction to find the greatest value among the array.
            int i;
            for(i=0; i<6; i++){
                if(num[i]>=max)
                    max=num[i];
            }
        }
        void display(){         // Functio to display the data.
            cout<<"\n ****MAXIMUM**** \n";
            cout<<"Maximum among the array is : "<<max;
            cout<<"\n";
        }
};
int main(){
    int A[6], i;
    cout<<"Enter the value of the elemnts of integer type : ";
    for(i=0; i<6; i++)
        cin>>A[i];
    maximum<int> p(A);          // Object of integer data type.
    p.find_maximum();
    float B[6];
    cout<<"Enter the value of the elemnts of float type : ";
    for(i=0; i<6; i++)
        cin>>B[i];
    maximum<float> q(B);        // Object of float data type.
    q.find_maximum();
    p.display();
    q.display();
}