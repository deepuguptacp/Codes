#include<bits/stdc++.h>
using namespace std;

void sortbyProbability(int pro[], int n){
    
}

int main(){
    string s;
    cout<<"Input the string : ";
    cin>>s;
    map<char, double> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int l = s.length();
    map<char, double> :: iterator itr;
    for(itr = mp.begin(); itr != mp.end(); itr++){
        itr->second = itr->second/l;
    }
    // for(itr = mp.begin(); itr != mp.end(); itr++){
    //     cout<<itr->first<<"   "<<itr->second<<endl;
    // }
    double pro[mp.size()];
    int i = 0;
    for(itr = mp.begin(); itr != mp.end(); itr++){
        pro[i++] = itr->second;
    }
    sortbyProbability(pro, mp.size());
    return 0;
}
// int main(){ 
// 	int n, i, j; 
// 	float total = 0; 
// 	string ch; 
// 	node temp; 
//     cout<<"Input the string : ";
//     string s;
//     cin>>s;
//     int l = s.length();
//     map<char, double> mp;
//     for(int i = 0; i < s.length(); i++){
//         mp[s[i]]++;
//     }
//     map<char, double> :: iterator itr;
//     for(i = 0, itr = mp.begin(); itr != mp.end() || i < n; itr++){
//         p[i++].sym = itr->first;
//     }
//     float x[20];
//     for(i = 0, itr = mp.begin(); itr != mp.end() || i < n; itr++){
//         itr->second = itr->second/l;
//         x[i] = itr->second;
//         total = total + p[i].pro;
//         i++;
//     }
//     p[i].pro = 1 - total;
// 	// Sorting the symbols based on 
// 	// their probability or frequency 
// 	sortByProbability(n, p); 

// 	for (i = 0; i < n; i++) 
// 		p[i].top = -1; 

// 	// Find the shannon code 
// 	shannon(0, n - 1, p); 

// 	// Display the codes 
// 	display(n, p);
//     cout<<endl;
// 	return 0; 
// }