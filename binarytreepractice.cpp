#include <stdio.h>
#include <iostream>
#include <queue>


using namespace std;
class btree
{
public:
    int data;
    btree *left;
    btree *right;

    btree(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

btree *maker()
{
    int x;
    cin >> x;

    if (x == -1)
    {
        return NULL;
    }
    btree *root = new btree(x);

    root->left = maker();
    root->right = maker();

    return root;
}

void printer(btree *x)
{

    if (x == NULL)
    {
        return;
    }

    // bte this is the preorder example..
    cout << x->data << endl;

    printer(x->left);
    printer(x->right);
}

void levelorderprinter(btree *x)
{
    queue<btree *> q;
    q.push(x);
    q.push(NULL);
    while (!q.empty())
    {
        btree *fron = q.front();
        q.pop();
        if (fron == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {

            cout << fron->data<<"  ";
            if (fron->left != NULL)
            {
                q.push(fron->left);
            }
            if (fron->right != NULL)
            {
                q.push(fron->right);
            }
        }
    }
}



// void mtraversalprint(){
//         // code here
//         Node* curr = root;
        
//         while(curr!= NULL){
//             if(curr->left){
//                 Node*pred = curr->left;
//                 while(pred->right!= NULL){
//                     pred= pred->right;
//                 }
                
//                 pred->right = curr->right;
//                 curr->right= curr->left ;
//                 curr->left = NULL;
//             }
//             else{
//                 curr = curr->right;
//             }
//         }
// }


int main()
{
    btree *x = NULL;

    x = maker();
    // printer(x);
    levelorderprinter(x);
}