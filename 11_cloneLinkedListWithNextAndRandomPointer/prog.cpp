#include <iostream>
using namespace std;
// Clone a linked list with next pointer and a random pointer without using extra sapce

struct Node
{
  int data;
  struct Node * next;
  struct Node * random;
  
  Node(int key)
  {
      data = key;
      next = random = NULL;
  }
};

void printList(Node * head)
{
    Node * temp = head;
    while(temp)
    {
        cout << "Data: " << temp->data;
        if(temp->random)
        {
            cout << " Random: " << temp->random->data;
        }
        cout << endl;
        temp = temp->next;
    }
}

Node * cloneList(Node * originalHead)
{
    Node*curr = originalHead;
    Node*temp;
    // create 1->2->3->4->5 to 1-->1->2-->2->3-->3->4-->4->5-->5
    while(curr)
    {
        temp = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = temp;
        curr = temp;
    }
    
    // now link these new nodes to their randoms too.
    curr = originalHead;
    while(curr)
    {
        if(curr->next && curr->random)
        {
          curr->next->random = curr->random->next;
          curr = curr->next->next;
        }  
    }
    
    // now get your original linked list back and take the cloned ones out by linking them to each other.
    curr = originalHead;
    Node*clonedHead = curr->next;
    Node*clonedCurr = clonedHead;
    while(curr && clonedCurr)
    {
        if(curr->next)
        {
          curr->next = curr->next->next;
          curr = curr->next;
        }  
        if(clonedCurr->next)
        {
          clonedCurr->next = clonedCurr->next->next;
          clonedCurr = clonedCurr->next;
        }
        
    }
    return clonedHead;
}

int main() {
    Node* start = new Node(1); 
	start->next = new Node(2); 
	start->next->next = new Node(3); 
	start->next->next->next = new Node(4); 
	start->next->next->next->next = new Node(5); 

	// 1's random points to 3 
	start->random = start->next->next; 

	// 2's random points to 1 
	start->next->random = start; 

	// 3's and 4's random points to 5 
	start->next->next->random = 
					start->next->next->next->next; 
	start->next->next->next->random = 
					start->next->next->next->next; 

	// 5's random points to 2 
	start->next->next->next->next->random = 
									start->next; 

    cout << "Original list: " << endl;	
	printList(start);
	Node * cloneHead = cloneList(start);
	cout << "Cloned list: " << endl;
	printList(cloneHead);
	return 0;
}

