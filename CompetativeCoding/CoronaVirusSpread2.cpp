#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int V[n];
        bool check[n];
        for(int i = 0; i < n; i++){
            cin>>V[i];
        }
        int Bcase = n;
        int Wcase = 1;
        for(int i = 0; i < n; i++){
            for(int a = 0; a < n; a++){
                check[a] = false;
            }
            int temp = 0;
            check[i] = true;
            for(int j = 0; j < n; j++){
                if(j < i){
                    if(V[j] > V[i]){
                        //temp++;
                        check[j] = true;
                    }
                } 
                else if(j > i){
                    if(V[j] < V[i]){
                        //temp++;
                        check[j] = true;
                    }
                }
            }
            for(int k = i + 1; k < n; k++){
                if(check[k] == true && V[k] < V[i]){
                    for(int l = 0; l < i; l++){
                        if(V[l] > V[k] && check[l] == false){
                            check[l] = true;
                        }
                    }
                }
            }
            for(int m = 0; m < n; m++){
                if(check[m] == true)
                    temp++;
            }
            Bcase = min(Bcase, temp);
            Wcase = max(Wcase, temp);
        }
        cout<<Bcase<<" "<<Wcase<<endl;
    }
    return 0;
}