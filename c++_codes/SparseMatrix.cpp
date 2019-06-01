#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data,i,j;
	struct node *row;
	struct node *col;
};
struct node *headRow=NULL;
struct node *headCol=NULL;
void CreateColHeader(int m){
	headRow=headRow;
	headRow->row=headRow;
	headRow->i=0;
	headRow->j=0;
	headRow->col=headRow;
	for(int k=m;k>0;k--){
		struct node *temp=new (struct node);
		temp->row=headRow->row;
		temp->col=temp;
		temp->i=0;
		temp->j=k;
		temp=NULL;
	}
	cout<<"col";
}
void CreateRowHeader(int n){
	headCol=headCol;
	headCol->row=headCol;
	headCol->i=0;
	headCol->j=0;
	headCol->col=headCol;
	for(int k=n;k>0;k--){
		struct node *temp=new(struct node);
		temp->col=headCol->col;temp->row=temp;
		temp->i=k;
		temp->j=0;
		temp=NULL;
	}
	cout<<"row";
}
int main(){
	cout<<"fgfd";
	CreateColHeader(5);
	CreateRowHeader(5);
	cout<<"c0";
	return 0;
}
