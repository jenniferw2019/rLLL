#include "list.h"
#include <iostream>

using namespace std;

void remove(node* &head, node* previous, node* current, int number)
{
  if (head->data == number)
    {
      node* temp = head;
      head = head->next;
      delete temp;
      remove(head, head, head->next, number);
    }
  else
    {
      if (current!= NULL)
	{
	  if (current->data == number)
	    {
	      node* temp = current;
	      previous->next = current->next;
	      current = previous->next;
	      delete temp;
	      remove(head, previous, current, number);
	    }
	  else
	    {
	      previous = current;
	      current = current->next;
	      remove(head, previous, current, number);
	    }
	}
    }
  
}

void copyValue(node* head, node* current, node* &copyNode, node* copycurrent, int number)
{
  if (current != NULL)
    {
      if (current->data != number)
	{
	  if (copyNode == NULL)
	    {
	      node* temp = new node();
	      temp->data = current->data;
	      copyNode = temp;
	      copyNode->next = NULL;
	      copycurrent = copyNode;
	      current = current->next;
	      copyValue(head, current, copyNode, copycurrent, number);
	    }
	  else
	    {
	      node* temp = new node();
	      temp->data = current->data;
	      copycurrent->next = temp;
	      copycurrent = copycurrent->next;
	      copycurrent->next = NULL;
	      current = current->next;
	      copyValue(head, current, copyNode, copycurrent, number);
	    }
	}
      else
	{
	  current = current->next;
	  copyValue(head, current, copyNode, copycurrent, number);
	}
    }
}

int sumEven(node* head, node* previous, node* current, int sum)
{   
  if (current != NULL)
    {
      if ((current->data % 2) == 0)
	{
	  sum = sum + current->data;
	  previous = current;
	  current = current->next;
	  sum = sumEven(head, previous, current, sum);
	}
      else
	{
	  previous = current;
	  current = current->next;
	  sum = sumEven(head, previous, current, sum);
	}
    }
  return sum;
}
