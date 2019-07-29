#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
struct node{                        //Node declaration
        int Roll;
        char name[20];
        struct node * next;
        struct node * prev;
}*start;                            //Starting Node of the list
class list                          //Class Declaration
{
    public:
        void create_list(int value, char value);
        void add_begin(int value, char value);
        void add_after(int value, int position);
        void delete_element(int value);
        void search_element(int value);
        void display_dlist();
        void count();
        void reverse();
        double_llist()              //Constructor to initialize the value of Start
        {
            start = NULL;  
        }
};
int main(){                         //Main Function
    
}