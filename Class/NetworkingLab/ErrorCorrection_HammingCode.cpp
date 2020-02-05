#include<iostream>
#include<math.h>
using namespace std;
int numofParity(int n){
    for(int i=0; i<n; i++){
        if(pow(2, i) >= n+i+1)
            return i;
    }
}

int main(){
    cout<<"NOTE : EVERY ENTERED DIGIT MUST BE IN BINARY FORMAT"<<endl;
    int n, message[50], gen[50], temp[50];
    cout<<"At SENDER END "<<endl;
    cout<<"Enter the number of message bits : ";
    cin>>n;
    cout<<"Enter the message bit : ";
    for(int i=0; i<n; i++)
        cin>>message[i];
    int parity = numofParity(n);
    //reverse(message, message+n);
    for(int i=0, j=0; i<n+parity, j<parity; i++){
        if(i+1 == pow(2, j)){
            gen[i] = 2;
            j++;
        }
        else
            gen[i] = message[i-j];
    }
    gen[8] = gen[9] = 0;
    gen[10] = 1;
    reverse(gen, gen+(n+parity));
    cout<<"Appended String "<<endl;
    for(int i=0; i<n+parity; i++)
        cout<<gen[i]<<" ";
    int p[parity];
    



    cout<<endl;
    return 0;
}
