#include "list.h"
using namespace std;

int main()
{
  
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned

    /*
    buildMyList(head, 2);
    buildMyList(head, 2);
    buildMyList(head, 1);
    buildMyList(head, 5);
    buildMyList(head, 8);
    buildMyList(head, 2);
    buildMyList(head, 4);
    buildMyList(head, 2);
    display_all(head);
    */
    //=== remove === 
    //remove(head, head, head, 9);
    //display_all(head);

    //=== copy ===
    node* copyN = NULL;
    copyValue(head, head, copyN, copyN, 2);
    display_all(copyN);

    //=== sum ===
    /*
    int total = 0;
    total = sumEven(head, head, head, 0);
    cout << total << endl;
    */
    return 0;
}

void buildMyList(node* &head, int newData)
{
  node* node1 = new node();
  node1->data = newData;

  node* current = head;
  if (head == NULL)
    {
      head = node1;
    }
  else
    {
      while (current->next != NULL)
	{
	  current = current->next;
	}
      current->next = node1;
      node1->next = NULL;
    }
}
