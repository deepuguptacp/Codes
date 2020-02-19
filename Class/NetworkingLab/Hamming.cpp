#include<bits/stdc++.h>
using namespace std;
int binarytoDecimal(int A[], int n){
    int dec_val=0;
    int base = 1;
    for(int i=n; i>=1; i--){
        dec_val += A[i] * base;
        base *= 2;
    }
    return dec_val;
}
int main(){
    int a, b, c[30], d, r = 0, d1; //Max bits here i kept is 30
    cout<<"At Sender's End : "<<endl;
    cout<<"--------------------"<<endl;
    cout << "Enter the No of Data Bits you want to Enter : ";
    cin >> a;
    while (a + r + 1 > pow(2, r)){ // ----------- calculate number of redundant bits.
        r++;
    }
    cout <<"No of parity bits to be added : " << r <<endl<<"Total Bits : " << a + r << endl;
    cout <<"Enter the Data Bits One by One : ";
    for (int i = a; i > 0; i--)
        cin >> c[i];
    cout << endl<<"Data bits entered : ";
    for (int i = 1; i <= a; i++)
        cout << c[i] << " ";
    cout << endl;
    //reverse(c, c+a);
    int data[a + r];
    d = 0;
    d1 = 1;
    for (int i = 1; i <= a + r; i++){
        if (i == pow(2, d)){
            data[i] = 2;
            d++;
        }
        else{
            data[i] = c[d1];
            d1++;
        }
    }
    //-----------------------------------------------
    cout <<"Data Bits are Encoded with Parity bits(2): ";
    for (int i = a+r; i > 0; i--)
        cout << data[i] << " ";
    d1 = 0;
    int min, max = 0, parity, s, j; /*Parity Bit Calculation */
    for (int i = 1; i <= a + r; i = pow(2, d1)){
        d1++;
        parity = 0;
        //j = i;
        s = i;
        min = 1;
        max = i;
        for (j=i; j <= a + r;){
            for (s = j; max >= min && s <= a + r; min++, s++){
                if (data[s] == 1)
                    parity++;
            }
            j = s + i;
            min = 1;
        }
        if (parity % 2 == 0){ // Even Parity
            data[i] = 0;
        }
        else{
            data[i] = 1;
        }
    }
    //reverse(data, data+(a+r));
    cout <<endl<<"Hamming codeword bits for even parity are : ";
    for (int i = a+r; i > 0; i--)
        cout << data[i] << " ";
    cout<<endl<<endl;
    cout<<"At Reciever's End : "<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Enter the message bit recieved one by one: ";
    int recieved[a+r];
    for(int i=a+r; i>0; i--)
        cin>>recieved[i];
    int par[r+1];
    d=1;
    for(int i=1; i<=a+r; i++){
        //Finding the parity bits

    }
    cout<<"Parity bits : ";
    for(int i=1; i<=r; i++)
        cout<<par[i]<<" ";
    int temp = binarytoDecimal(par, r);
    cout<<endl;
    if(temp == 0)
        cout<<"No ERROR in the message bit"<<endl;
    else
        cout<<"There is an ERROR in "<<temp<<"the bit."<<endl;
    return 0;
}