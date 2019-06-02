#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int info;
    struct node *next;
    struct node *prev;
}*start;
struct node *start = NULL;
