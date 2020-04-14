#include<bits/stdc++.h>
using namespace std;
string leftRotate(string s, int d){
        // reverse(s.begin(), s.begin()+d); 
        // reverse(s.begin()+d, s.end()); 
        // reverse(s.begin(), s.end());
        return s.substr(d) + s.substr(0, d);
    }
    
string rightRotate(string s, int d){
    return leftRotate(s, s.length()-d);
    //return s;
}
    
string stringShift(string s, vector<vector<int> >& shift) {
    int rotate = 0;
    int length = s.size();
    for(int i=0; i<shift.size(); i++){
        if(shift[i][0] == 0){
            rotate -= shift[i][1];
        } else {
            rotate += shift[i][1];
        }
    }
    int d = abs(rotate) % length;
    if(rotate == 0) 
        return s;
    else if(rotate > 0){
        return rightRotate(s, d);
    }
    else {
        return leftRotate(s, d);
    }    
}

int main(){
    string s;
    cin>>s;
    vector<vector<int> > V;
    int val;
    int n;
    cin>> n;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < 2; j++){
            cin >> val;
            temp.push_back(val);
        }
        V.push_back(temp);
        temp.clear();
    }
    cout<<stringShift(s, V)<<endl;
    return 0;
}