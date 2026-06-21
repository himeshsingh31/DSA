#include <iostream>
#include <stdio.h>
#include <queue>
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
 // essential class for the tree root.
    
tree *build(tree *root)
{
    int data;
    cout << "Enter the data :" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    root = new tree(data);
    cout << "Enter the left part of that ROOT: " << endl;
    root->left = build(root->left);

    cout << "Enter the right part of that ROOT:" << endl;
    root->right = build(root->right);

    return root;
} // making the tree.

void givetree(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    givetree(root->left);
    givetree(root->right);

} // printing the tree by the simple way

void levelorder(tree *root)
{

    queue<tree *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        tree *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }

            else
            {
                return;
            }
        }

        else
        {
            cout << temp->data;

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

// levelorder print by the double vector.

// build the tree by the level order traversal
void buildfromlevelorder(tree *&root)
{
    queue<tree *> q;
    int data;

    cout << "Enter the data for the ROOT:" << endl;
    cin >> data;
    root = new tree(data);

    q.push(root);

    while (!q.empty())
    {
        tree *temp = q.front();
        q.pop();
        cout << "Enter the left data for the :" << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new tree(leftdata);
            q.push(temp->left);
        }
        cout << "Enter the right data for the :" << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new tree(rightdata);
            q.push(temp->right);
        }
    }
}

void inorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

void preorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    inorder(root->left);
    inorder(root->right);
}

void postorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout << root->data << endl;
}

vector<int> morristraversal(tree *curr)
{
    vector<int> answer;

    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            answer.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            tree *prev = curr->left;
            while (prev->right != NULL && prev->right!= curr)
            {
                prev = prev->right;
            }

            if(prev->right == NULL){
prev->right= curr;
curr = curr->left;
            }
            else{
                prev->right = NULL;
answer.push_back(curr->data);
curr = curr->right;
            }
        }
    }
    return answer;
}

int main()
{
    tree *root = NULL;
    root = build(root);
    // givetree(x);

    // levelorder(root);


    vector<int> ans = morristraversal(root);
    for(int i =0 ; i<ans.size();i++ ){
        cout<<ans[i]<<endl;
    }
    return 0;
}