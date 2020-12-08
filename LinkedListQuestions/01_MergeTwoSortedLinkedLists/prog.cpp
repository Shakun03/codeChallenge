#include <iostream>
using namespace std;

/*Merge two sorted linked lists.
GFG solution can be a bit difficult to understand, refer this one which I made after understanding 
concept from back to back SWE channel */


struct Node
{
    int data;
    struct Node*next;
    
    Node(int key)
    {
        data = key;
        next=NULL;
    }
};

struct Node*mergeLinkedLists(struct Node*head1, struct Node*head2)
{
    struct Node * left = head1;
    struct Node * right = head2;
    struct Node *dummyNode =new Node(500); // kuch bhi rkh lo its dummy
    struct Node* curr = dummyNode;
    
    while(left && right)
    {
        if(left->data <= right->data)
        {
            curr->next = left;
            left = left->next;
        }
        else
        {
            curr->next = right;
            right = right->next;
        }
        curr = curr->next;
    }
    if(!left && right)
    {
        curr->next = right;
    }
    else if(!right && left)
    {
        curr->next = left;
    }
    
    return dummyNode->next;
}

void printList(struct Node*head)
{
    struct Node*temp = head;
    
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
	// your code goes here
	Node * head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	
	Node *head2 = new Node(11);
	head2->next = new Node(21);
	head2->next->next = new Node(28);
	head2->next->next->next = new Node(32);
	
	Node*finalHead = mergeLinkedLists(head,head2);
	
	printList(finalHead);
	return 0;
}

