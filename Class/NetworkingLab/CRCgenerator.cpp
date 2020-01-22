#include<iostream>
#include<string>
using namespace std;
#define ll long long
void XOR(int temp[], int gen[], int n, int r){      // Finding XOR
    for(int i=0; i<n; i++){
        if (gen[0] == temp[i]){
            for(int j=0, k=i; j<r+1; j++, k++)
                if(!(temp[k] ^ gen[j]))
                    temp[k] = 0;
                else
                    temp[k] = 1;
        } 
    }
}
int main(){
    cout<<"NOTE : EVERY ENTERED DIGIT MUST BE IN BINARY FORMAT"<<endl;
    int n, r, message[50], gen[50], temp[50];
    cout<<"At SENDER END "<<endl;
    cout<<"Enter the number of message bits : ";
    cin>>n;
    cout<<"Enter the number of generator bits : ";
    cin>>r;
    cout<<"Enter the message : ";
    for(int i=0; i<n; i++)
        cin>>message[i];
    cout<<"Enter the generator : ";
    for(int i=0; i<r; i++)
        cin>>gen[i];
    r--;                            // The number of appended zeroes at the end is one less than the length of the generator
    for(int i=0; i<r; i++)
        message[n+i] = 0;           // Appending the zeros at the end of the sender message
    for(int i=0; i<n+r; i++)
        temp[i] = message[i];
    XOR(temp, gen, n, r);         // Function calling for XOR
    cout<<"CRC : ";
    for(int i=0; i<r; i++){         //Appending th remainder at the end of the sender's message
        cout<<temp[n+i]<<" ";
        message[n+i] = temp[n+i];
    }
    cout<<endl<<"Transmitted Message : ";   // Message delivered
    for(int i=0; i<n+r; i++)
        cout<<message[i]<<" ";
    cout<<"RECIEVER END"<<endl;     // Message recieved
    cout<<"Enter the recieved message : "
    for(int i=0; i<n+r; i++)
        cin>>message[i];
    for(int i=0; i<n+r; i++)
        temp[i] = message[i];
    XOR(temp, gen, n, r);
    for(int i=0; i<r; i++){
        if(temp[n+i]){              // Checking for the errors i.e any '1' in the remainder
            cout<<"Error detected in received message.";
            return 0;
        } 
    }
    cout<<"No error in received Message.\nReceived Message : ";
    for(int i=0; i<n; i++)
        cout<<message[i]<<" ";
    return 0;
}