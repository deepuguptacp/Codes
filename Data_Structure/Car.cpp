#include<iostream> 
using namespace std;
class Node{ 
	public: 
	    int key;
        int direction;
        float pos;
        float Time;
	    Node *left; 
	    Node *right; 
	    int height; 
};
int max(int a, int b);
int height(Node *N){ 
	if (N == NULL) 
		return 0; 
	return N->height; 
}
int max(int a, int b){ 
	return (a > b)? a : b; 
}
Node* newNode(int key, float x, float t, int d){ 
	Node* node = new Node(); 
	node->key = key;
    node->direction = d;
    node->pos = x;
    node->Time = t;
	node->left = NULL; 
	node->right = NULL; 
	node->height = 1;
	return(node); 
}
Node *rightRotate(Node *y){ 
	Node *x = y->left; 
	Node *T2 = x->right; 
	x->right = y; 
	y->left = T2;
	y->height = max(height(y->left), height(y->right)) + 1; 
	x->height = max(height(x->left), height(x->right)) + 1;
	return x; 
}
Node *leftRotate(Node *x){ 
	Node *y = x->right; 
	Node *T2 = y->left;
	y->left = x; 
	x->right = T2;
	x->height = max(height(x->left), height(x->right)) + 1; 
	y->height = max(height(y->left), height(y->right)) + 1; 
    return y;
}
int getBalance(Node *N){ 
	if (N == NULL) 
		return 0; 
	return height(N->left) - height(N->right); 
}
Node* insert(Node* node, int r){
    int d;
    float x, t;
    cout<<"Enter the direction of car : ";
    cin>>d;
    cout<<"Enter the time and location of the care entering : ";
    cin>>t>>x;
	if (node == NULL) 
		return(newNode(r, x, t, d));
	if (r < node->key) 
		node->left = insert(node->left, r); 
	else if (r > node->key) 
		node->right = insert(node->right, r); 
	else
		return node;
	node->height = 1 + max(height(node->left), height(node->right));
	int balance = getBalance(node);
	if (balance > 1 && r < node->left->key) 
		return rightRotate(node);
	if (balance < -1 && r > node->right->key) 
		return leftRotate(node);
	if (balance > 1 && r > node->left->key){ 
		node->left = leftRotate(node->left); 
		return rightRotate(node); 
	}
	if (balance < -1 && r < node->right->key){ 
		node->right = rightRotate(node->right); 
		return leftRotate(node); 
	}
	return node; 
}
void preOrder(Node *root){ 
	if(root != NULL){ 
		cout << root->key << " "; 
		preOrder(root->left); 
		preOrder(root->right); 
	} 
}
int main(){
	Node *root = NULL;
    int key;
    cout<<"Registration number of entering car : ";
    cin>>key;
	insert(root, key);
	cout << "Preorder traversal of the constructed AVL tree is \n"; 
	preOrder(root);
	return 0; 
}