#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* left;
    struct node* right;
};
struct node* root = NULL;

struct node* Insert(struct node* root, int num){
    struct node* temp = new node;
    temp->val = num;
    temp->left = NULL;
    temp->right = NULL;

    struct node* x = root;
    struct node* y = NULL;
 
    while (x != NULL){
        y = x;
        if (num < x->val){
            x = x->left;
        } else {
            x = x->right;
        }
    }
    if(y == NULL)
        y = temp;
    else if(num < y->val)
        y->left = temp;
    else
        y->right = temp;
    return y;
}

void inorder(struct node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void preOrder(struct node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}

vector<vector<int> > verticalOrderTraversal(struct node* A) {
    vector<vector<int> > v;
    if(A == NULL)
        return v;
    queue<pair <struct node*, int> > q;
    q.push(make_pair(A, 0));
    
    map<int, vector<int> > mp;
    while(!q.empty()){
        pair<struct node*, int> 
        temp = q.front();
        q.pop();
        
        if(temp.first->left){
            q.push(make_pair(temp.first->left, temp.second - 1));
        }
        if(temp.first->right){
            q.push(make_pair(temp.first->right, temp.second + 1));
        }
        
        mp[temp.second].push_back(temp.first->val);
    }
    map<int, vector<int> >::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        v.push_back(it->second);
    }
    return v;
}

void verticalOrderSUM(struct node* root, int h, map<int, int> &mp){
    if(root == NULL){
        return;
    }
    verticalOrderSUM(root->left, h-1, mp);
    mp[h] += root->val;
    verticalOrderSUM(root->right, h+1, mp);
}

void diagonalOrderSum(struct node* root, int h, map<int, int> &mp){
    if(root == NULL){
        return;
    }
    diagonalOrderSum(root->left, h, mp);
    mp[h] += root->val;
    diagonalOrderSum(root->right, h+1, mp);
}

int main(){
    root = Insert(root, 7);
    Insert(root, 2);
    Insert(root, 5);
    Insert(root, 9);
    Insert(root, 10);
    Insert(root, 4);
    Insert(root, 6);
    Insert(root, 8);
    Insert(root, 13);


    cout<<"INORDER---------------\n";
    inorder(root);

    cout<<"\n\nPREORDER---------------\n";
    preOrder(root);

    cout<<"\n\nPOSTORDER---------------\n";
    postOrder(root);

    cout<<"\n\nVERTICAL ORDER---------------\n";
    cout<<"\n\n-------TRAVERSAL-----------\n";

    vector<vector<int> > res = verticalOrderTraversal(root);
    for(int i = 0; i < res.size(); i++){
        cout<<"[ ";
        for(int j = 0; j < res[i].size(); j++){
            cout<<res[i][j]<<", ";
        }
        cout<<"]"<<endl;
    }

    cout<<"\n\n-------SUM-----------\n";
    map<int, int> mp;
    verticalOrderSUM(root, 0, mp);
    map<int, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); ++it){
        cout<<it->first<<"\t"<<it->second<<"\n";
    }

    cout<<"\n\nDIAGONAL ORDER SUM---------------\n";
    mp.clear();
    diagonalOrderSum(root, 0, mp);
    for(it = mp.begin(); it != mp.end(); ++it){
        cout<<it->first<<"\t"<<it->second<<"\n";
    }

    cout<<"\n";
    return 0;
}