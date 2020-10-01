#include <iostream>

/* Inversion of tree:
  1                 1 
 / \               / \
3   2   ---->     2   3
   / \           / \
  5   4         4   5
*/
  

using namespace std;

struct Node
{
   int data;
   struct Node*left;
   struct Node*right;
};

void invertTree(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
    
    invertTree(root->left);
    invertTree(root->right);
    
    Node * temp = root->left;
    root->left = root->right;
    root->right = temp;
}

struct Node* newNode(int key)
{
    struct Node* newNde = new struct Node;
    newNde->data = key;
    newNde->left = NULL;
    newNde->right = NULL;
    return newNde;
}

void inOrder(struct Node*root)
{
    if(root == NULL)
    {
        return;
    }
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
	// your code goes here
    Node * root = newNode(1);
    root->left = newNode(3);
    root->right = newNode(2);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    
    inOrder(root);
    invertTree(root);
    cout << endl << "after inversion: " << endl;
    inOrder(root);
	return 0;
}

