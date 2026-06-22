#include <stdio.h>
#include <iostream>
#include<queue>
using namespace std;
class noder
{
public:
    int data;
    noder *left;
    noder *right;

    noder(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

noder* placer(int data,noder* xyz){

    if(xyz ==NULL){
    xyz = new noder(data);
        return xyz;
    }

    else if (data>xyz->data)
    {
        xyz->right = placer(data,xyz->right);
    }

    else{
xyz->left = placer(data,xyz->left);
    }

    

return xyz;
}


noder* bstree(noder* p){
int x ;
cin>>x;

while(x!=-1){
p = placer(x,p);
cin>>x;

}
return p;

}

void morris(noder *parent)
{

    queue<noder *> q;

    q.push(parent);
    q.push(NULL);

    while (!q.empty())
    {

        noder*temp = q.front();
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
cout<<"do you wanted to make the binary search tree?"<<endl;
char ans;
cin>>ans;
noder* stem = NULL;
switch (ans)
{
case 'y':
cout<<"enter the first paernt value"<<endl;
stem  =bstree(stem);
break;

    case 'n':
cout<<"exited"<<endl;
    break;

default:
cout<<"exited"<<endl;
    break;
}

morris(stem);
    return 0;
}