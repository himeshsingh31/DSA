#include<stdio.h>
#include<iostream>
using namespace std;
 class  node{
public: 
int data; 
node* left;
node* right;

node(int data){
this->data = data;
left = NULL;
right = NULL;
}
 };


node* inserthead(node* root,int data){
    if(root==NULL){
        root = new node(data);
return root;
}


    if(data < root->data){
root->left =inserthead (root->left,data);
    }

    else{
        root->right = inserthead(root->right,data);
    }

return root;
}

 void maker(node* &head){
    int x;
    cin>>x;
while(x!= -1)
{head = inserthead(head,x);
cin>>x;}


}

void printer (node* root){
if(root==NULL){
    return ;
}
printer(root->left);
cout<<root->data<<endl;
printer(root->right);

}

 
int main(){
    node* head = NULL;
    maker(head);
    cout<<endl;
    cout<<endl;
    printer(head);
    return 0;
}
