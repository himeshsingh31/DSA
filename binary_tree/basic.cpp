#include<stdio.h>
#include<iostream>
using namespace std;
class  tree{
public:
int data;
tree* left;
tree* right;

tree(int data){
    this->data = data;
    left =NULL;
    right = NULL;

}
};

tree* maker (){
    int x ;
    cin>>x;
    tree* root = new tree(x);
    if(root->data == -1){
        return NULL;
    }

root->left = maker();
root->right = maker();

return root;
}


void printer (tree* root){
if(root==NULL){
    return ;
}
printer(root->left);
cout<<root->data<<endl;
printer(root->right);

}
int main(){

    tree* root=NULL;

    root = maker();


printer(root);


return 0;
}