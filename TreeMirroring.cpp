#include <iostream>
using namespace std;

typedef struct node{
    node* left;
    node* right;
    int data;
}node;
struct node* root = NULL;
node* getNode(int data)
{
    node* n = new node();
    n->data=data;
    n->left=NULL;
    n->right = NULL;
}
void mirror(node *root)
{
    if(root==NULL)
    {
        return;
    }
    mirror(root->left);
    mirror(root->right);
    if(root->left !=NULL && root->right!=NULL)
    {
        node* temp=root->left;
        root->left = root->right;
        root->right = temp;
    }
}
void inorder(node *root)
{
    if(root == NULL)
        return;
        
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void insert(int data)
{
    node* temp = root;
    if(root==NULL)
    {
        root= getNode(data);
        return;
    }
    node* x;
    while(temp != NULL)
    {
        x=temp;
        if (data < temp->data)
            temp=temp->left;
        else
            temp= temp->right;
        
    }
    if (x==NULL)
        x=getNode(data);
        
    if(data < x->data)
        x->left=getNode(data);
    else
         x->right=getNode(data);
                
}
 
// Driver Code 
int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    
    insert( 50); 
    insert( 30); 
    insert( 20); 
    insert( 40); 
    insert( 70); 
    insert(60); 
    insert( 80); 
  
    // print inoder traversal of the BST 
    inorder(root); 
    mirror(root);
    cout<<endl;
  inorder(root);
    return 0; 
}
