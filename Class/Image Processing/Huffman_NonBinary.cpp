#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;
stack<int> s;
class Huffman_Codes{
 	struct New_Node{
  		char data;
  		size_t freq;
  		New_Node* left;
        New_Node* mid;
  		New_Node* right;
        //stack<int> s;
  		New_Node(char data, size_t freq) : data(data), freq(freq), left(NULL), mid(NULL), right(NULL){}
 		~New_Node(){
   			delete left;
            delete mid;
   			delete right;
 		}
 	};

 	struct compare{
  		bool operator()(New_Node* l, New_Node* r){
    		return (l->freq > r->freq);
  		}
	};
	New_Node* top;
	void print_Code(New_Node* root, string str){
		if(root == NULL)
   		    return;

 		if(root->data == '$'){
  			print_Code(root->left, str + "0");
  			print_Code(root->mid, str + "1");
            print_Code(root->right, str + "2");
 		}

 		if(root->data != '$'){
   			cout << root->data <<" : " << str << "\n";
            s.push(str.length());
   			print_Code(root->left, str + "0");
   			print_Code(root->mid, str + "1");
            print_Code(root->right, str + "2");
 		}
	}

	public:
  		Huffman_Codes() {};
  		~Huffman_Codes(){
    		delete top;
  		}
  		void Generate_Huffman_tree(vector<char>& data, vector<size_t>& freq, size_t size){
   			New_Node* left;
            New_Node* mid;
   			New_Node* right;
   			priority_queue<New_Node*, vector<New_Node*>, compare > minHeap;

			for(size_t i = 0; i < size; ++i){
      			minHeap.push(new New_Node(data[i], freq[i]));
   			}

			while(minHeap.size() != 1){
      			left = minHeap.top();
				minHeap.pop();
				mid = minHeap.top();
				minHeap.pop();
                right = minHeap.top();
				minHeap.pop();
				top = new New_Node('$', left->freq + mid->freq + right->freq);
      			top->left  = left;
                top->mid = mid;
      			top->right = right;
      			minHeap.push(top);
     		}
            cout<<"Huffman Code : "<<endl;
    		print_Code(minHeap.top(), "");
 		}
};

int main(){
  	int n, f;
  	char ch;
  	Huffman_Codes set1;
  	vector<char> data;
  	vector<size_t> freq;
  	cout<<"Enter the number of elements : ";
  	cin>>n;
  	cout<<"Enter the characters : ";
  	for(int i = 0; i < n; i++){
      	cin>>ch;
		data.insert(data.end(), ch);
  	}
  	cout<<"Enter the Probabilities : ";
	double k[n];
    double entropy = 0;
  	for (int i = 0; i < n; i++){
		cin>>k[i];
        entropy += k[i] * log2(k[i]);
		k[i] = k[i] * 1000;
      	f = k[i];
		freq.insert(freq.end(), f);
	}
	size_t size = data.size();
  	set1.Generate_Huffman_tree(data, freq, size);
    entropy = abs(entropy);
    cout<<"Entropy = "<<entropy<<endl;
    double avgLen = 0;
    double efficiency = 0;
    int i = 0;
    while(!s.empty()){
        avgLen = avgLen + k[i] * s.top();
        s.pop();
        i++;
    }
    avgLen = avgLen / 1000;
    cout<<"Average Length : "<<avgLen<<endl;
    cout<<"Efficiency = "<<entropy / avgLen<< "  OR  "<<entropy / avgLen * 100<<"%"<<endl;
	return 0;
}