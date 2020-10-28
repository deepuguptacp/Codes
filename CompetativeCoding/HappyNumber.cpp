#include<bits/stdc++.h>
using namespace std;

int numSquareSum(int n){
    int squareSum = 0;
    while (n){
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    return squareSum;
}

bool isHappy(int n) {
    int slow, fast;
    slow = fast = n;
    do{
        slow = numSquareSum(slow);
        fast = numSquareSum(numSquareSum(fast));
    }while(slow != fast);
    return (slow == 1);
}
// Second method
bool ishappy(int n){
    int sum = n;
    int temp = n;
    while(sum > 9){
        if(sum == 7 || sum == 1){
            return true;
        } else {
            sum = 0;
            while(temp){
                sum += pow(temp%10, 2);
                temp /= 10;
            }
            if(sum == 1){
                return true;
            }
            temp = sum;
        }
    }
    if(sum == 1 || sum == 7){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the integer to check if it is a Happy Number : ";
    cin>>n;
    if(isHappy(n))
        cout<<"True";
    else
        cout<<"False";
    cout<<endl;
    return 0;
}