#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;
stack<int> s;
class Huffman_Codes{  // Class for Huffman code
 	struct New_Node{
  		char data;     // Character for which code is to be found
  		size_t freq;    // Frequency of the character
  		New_Node* left;
  		New_Node* right;
  		New_Node(char data, size_t freq) : data(data), freq(freq), left(NULL), right(NULL){} //Constructor
 		~New_Node(){    // destructor
   			delete left;
   			delete right;
 		}
 	};

 	struct compare{     // Comaprison to place the added sum in min heap
  		bool operator()(New_Node* l, New_Node* r){
    		return (l->freq > r->freq);
  		}
	};
	New_Node* top;
	void print_Code(New_Node* root, string str){    // Print the final code for each character DFS implemented
		if(root == NULL)
   		    return;

 		if(root->data == '$'){
  			print_Code(root->left, str + "0");
  			print_Code(root->right, str + "1");
 		}

 		if(root->data != '$'){
   			cout << root->data <<" : " << str << "\n";
            s.push(str.length());                   // Getting the length of each code which will be helpful in calculating final average length
   			print_Code(root->left, str + "0");
   			print_Code(root->right, str + "1");
 		}
	}

	public:
  		Huffman_Codes() {};
  		~Huffman_Codes(){
    		delete top;
  		}
  		void Generate_Huffman_tree(vector<char>& data, vector<size_t>& freq, size_t size){ // Grnrating huffman code
   			New_Node* left;
   			New_Node* right;
   			priority_queue<New_Node*, vector<New_Node*>, compare > minHeap;     // Priority queue to store frequencies

			for(size_t i = 0; i < size; ++i){
      			minHeap.push(new New_Node(data[i], freq[i]));
   			}

			while(minHeap.size() != 1){
      			left = minHeap.top();
				minHeap.pop();
				right = minHeap.top();
				minHeap.pop();
				top = new New_Node('$', left->freq + right->freq);
      			top->left  = left;
      			top->right = right;
      			minHeap.push(top);
     		}
            cout<<"Huffman Code : "<<endl;
    		print_Code(minHeap.top(), "");
 		}
};

int main(){     // Source
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
        entropy += k[i] * log2(k[i]);           // Entropy calculation
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
    while(!s.empty()){                  // Calculation of Average length
        avgLen = avgLen + k[i] * s.top();
        s.pop();
        i++;
    }
    avgLen = avgLen / 1000;
    cout<<"Average Length : "<<avgLen<<endl;
    cout<<"Efficiency = "<<entropy / avgLen<< "  OR  "<<entropy / avgLen * 100<<"%"<<endl; // Efficiency calculation
	return 0;
}