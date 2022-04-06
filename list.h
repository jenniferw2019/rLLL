//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node * next;
};

/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */
void remove(node* &head, node* previous, node* current, int number);
void copyValue(node* head, node* current, node* &copyNode, node* copycurrent, int number);
int sumEven(node* head, node* previous, node* current, int sum);

/* These functions are already written and can be called to test out your code */
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
void destroy(node * &head);     //supplied
void buildMyList(node* &head, int newData);

