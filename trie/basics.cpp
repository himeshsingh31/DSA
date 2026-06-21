#include <stdio.h>
#include <iostream>

using namespace std;
class trinode
{
public:
    char data;
    trinode *boys[26];
    bool isterminal;

    trinode(int data)
    {
        this->data = data;

        for (int i = 0; i < 26; i++)
        {
            boys[i] = NULL;
        }
        isterminal = false;
    }
};

class TRIE
{
public:

trinode* root;
TRIE(){

    root = new trinode('\0');
}

    void insertattrie(trinode *root, string word)
    {

        if (word.length() == 0)
        {
            root->isterminal = true;
            return ;
        }

        int index = word[0] - 'a';
        trinode *child;

        if (root->boys[index] != NULL)
        {
            child = root->boys[index];
        }

        else
        {
            child = new trinode(word[0]);
            root->boys[index] = child;
        }

        insertattrie(child, word.substr(1));
    }
    void insertword(string word)
    {
        insertattrie(root, word);
    }
    ///insertion at trie  finish....

bool searchtrie(trinode* root,string word ){

    if(word.length()== 0){
        return  root->isterminal;
    }


    int index = word[0]-'a';

    trinode* child;
    if(root->boys[index]!= NULL){
child = root->boys[index];
    }

    else{
return false;
    }

   return searchtrie(child,word.substr(1));

}

bool searchtriemain(string word){
return searchtrie(root,word);
}



};

int main()
{
    TRIE x;
    
x.insertword("c");
x.insertword("co");
x.insertword("cod");
x.insertword("codi");
x.insertword("codin");
x.insertword("coding");
x.insertword("oding");
x.insertword("ding");
x.insertword("ing");
x.insertword("ng");
x.insertword("g");

//searching those words in that dictionary...
cout<<x.searchtriemain("soup")<<endl;
cout<<x.searchtriemain("coding")<<endl;
}
