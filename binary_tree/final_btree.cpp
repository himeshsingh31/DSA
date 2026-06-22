#include<stdio.h>
#include<iostream>
using namespace std;

class btree{
public:
int data;
btree* left;
btree* right;

btree(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;

}



};

btree* maker (btree* node){
cout<<"enter the first value of the tree!"<<endl;
int x;
cin>>x;
if(x == -1)
return NULL;


node = new btree(x);


node->left = maker(node->left);
node->right = maker(node->right); 

return node;
}

int main(){
btree* pehla = NULL ;
maker(pehla);


return 0;
}
