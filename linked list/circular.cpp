#include <iostream>
using namespace std;
class node{
    private:
    
    public:
    int data;
    node*next ;

    node(int data){
this->data = data;
this->next = NULL;
    }
};


void insertattail(int data,node * &first,node*original){
node* temp = new node(data);
first->next = temp;
temp ->next = original;
first = temp;
}


void printnode(node* original,node* t1){
  node* temp = t1;
   do
   {cout<<temp->data<<"  ";
   temp = temp->next;}
    while(temp->next!= original->next);
    




}
int main() {
    node* n1 = new node(10);
    node* original = n1;
    insertattail(20,n1,original);
        insertattail(30,n1,original);
            insertattail(40,n1,original);
                insertattail(50,n1,original);
                    insertattail(60,n1,original);

                    printnode(original,original);
    return 0;
}