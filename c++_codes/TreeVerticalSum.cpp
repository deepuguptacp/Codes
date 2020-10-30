// C++ program to find Vertical Sum in 
// a given Binary Tree 
#include<bits/stdc++.h> 
using namespace std; 

struct Node{
	int data; 
	struct Node *left, *right; 
};

// A utility function to create a new 
// Binary Tree node 
Node* newNode(int data){
	Node *temp = new Node; 
	temp->data = data; 
	temp->left = temp->right = NULL; 
	return temp;
}
// Traverses the tree in in-order form and 
// populates a hashMap that contains the 
// vertical sum 
void verticalSumUtil(Node *node, int hd, map<int, int> &Map){
	if (node == NULL)
        return;

	verticalSumUtil(node->left, hd-1, Map);

	Map[hd] += node->data;
	
	verticalSumUtil(node->right, hd+1, Map); 
} 

// Driver program to test above functions 
int main(){
	// Create binary tree as shown in above figure 
	Node *root = newNode(1); 
	root->left = newNode(2);
	root->right = newNode(3);
	root->right->left = newNode(5); 
	root->right->right = newNode(6); 
	root->right->left->left = newNode(7); 
	root->right->left->right = newNode(8);

	map<int, int> Map;
	map<int, int> :: iterator it;

	verticalSumUtil(root, 0, Map);

	for (it = Map.begin(); it != Map.end(); ++it){
		cout<< it->second<<" ";
    }
    cout<<endl;

	return 0; 
}