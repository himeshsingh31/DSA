
#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class tree
{
public:
    int root;
    tree *left;
    tree *right;
    tree(int data)
    {
        root = data;
        left = NULL;
        right = NULL;
    }
};

void  build2(tree* x)
{
    queue<tree*>q;
    q.push(x);
q.push(NULL);
    while( !q.empty()){

        tree* temp  = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if( !q.empty()){
                q.push(NULL);
            }
        }

        else{
            
            cout<<temp->root<<" ";
            if (temp ->left!= NULL){
                q.push(temp->left);
            }
            
                    if(temp->right!= NULL){
                        q.push(temp->right);
                    }
        }

    }
// 
}
tree *build(tree * &rooto)
{

    int data;

    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    rooto = new tree(data);

// 1 2 -1 -1 3 4 6 -1 -1 -1 5 7 -1 -1 8 9 -1 -1 -1 
    rooto->left = build(rooto->left);

    rooto->right = build(rooto->right);

    return rooto;
}

int main()
{
    tree *root = NULL;
    cout<<"enter the main root."<<endl;
    build(root);
    build2(root);
    return 0;
}