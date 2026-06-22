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
        this->left = NULL;
        this->right = NULL;
    }
};

btree *maker(btree *node)
{
    cout << "enter the first value of the tree!" << endl;
    int x;
    cin >> x;
    if (x == -1)
        return NULL;

    node = new btree(x);

    node->left = maker(node->left);
    node->right = maker(node->right);

    return node;
}

// now we gonna do is morris traversal .
void morris(btree *parent)
{

    queue<btree *> q;

    q.push(parent);
    q.push(NULL);

    while (!q.empty())
    {

        btree *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout<<endl;
if(!q.empty())
            q.push(NULL);

        }

        else
        {
            cout << temp->data << " " ;
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    btree *pehla = NULL;
    btree *parent = maker(pehla);
    morris(parent);

    return 0;
}
