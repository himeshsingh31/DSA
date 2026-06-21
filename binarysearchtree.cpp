#include <iostream>

using namespace std;
class tree
{
public:
    int data;
    tree *left;
    tree *right;

    tree(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

tree *insertbinarytree(tree *head, int x)
{
    if (head == NULL)
    {
        head = new tree(x);
        return head;
    }

    if (x < head->data)
    {
        head->left = insertbinarytree(head->left, x);
    }

    else if (x > head->data)
    {
        head->right = insertbinarytree(head->right, x);
    }
    return head;
}

void maker(tree *&head)
{

    int x;
    cin >> x;
    while (x != -1)
    {
        head = insertbinarytree(head, x);
        cin >> x;
    }
}
// by morris traversal

// by normal method
void finder(tree *root, int x)
{
    if (root == NULL)
    {
        cout << "the given value is not in the tree " << endl;
        return;
    }
    if (x == root->data)
    {
        cout << root << endl;
        return;
    }

    else if (x < root->data)
    {
        finder(root->left, x);
    }
    else if (x > root->data)
    {
        finder(root->right, x);
    }
}

void printer(tree *x)
{
    if (x == NULL)
    {
        return;
    }
    printer(x->left);
    cout << x->data << endl;
    printer(x->right);
}

//deleting a node.
tree *deleter(tree *&head, int value)
{

    if (head == NULL)
    {
        return NULL;
    }


    if (head->data < value)
    {
        head->right = deleter(head->right, value);
    }

    else if (head->data > value)
    {
        head->left = deleter(head->left, value);
    }
    else if( head->data==value)
    {
        // for 0 childs
        if (head->left == NULL && head->right == NULL)
        {
delete head;
return NULL;
        }

        // for 1 childs.
        else if (head->left == NULL || head->right == NULL)
        {
if(head->left ==NULL && head->right!= NULL){
    tree* temp = head->right;
    delete head;
    return temp;
}

if(head->right ==NULL && head->left!= NULL){
tree* temp = head->left;
    delete head;
return temp;
}
        }

        // for 2 childs
        else if (head->left != NULL && head->right != NULL)
        {
tree* temp = head->right;
tree* temp2 = head->left;
while(temp2->right!= NULL){
    temp2=temp2->right;
}       
temp2->right= temp;
tree* temp3 = head->left;
delete head;
return temp3;

}
    }
    return head;
}
int main()
{
    tree *x = NULL;
    maker(x);
    printer(x);

    finder(x, 13);

    return 0;
}