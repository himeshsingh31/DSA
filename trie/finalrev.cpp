#include <stdio.h>
#include <iostream>
using namespace std;

class trie
{
public:
    trie *chars[26];
    bool status;

    trie()
    {
        status = false;
        for (int i = 0; i < 26; i++)
        {
            chars[i] = NULL;
        }
    }
};

void insertr(trie *root, string xyz)
{
    int x = 0;
    while (x < xyz.length())
    {
        char c = xyz[x];
        int locator = c - 'a';

        if (root->chars[locator] == NULL)
        {
            root->chars[locator] = new trie();
        }

        root = root->chars[locator];
        x++;
    }
    root->status = true;
}

bool searcher(string x, trie *root)
{
    int index = 0;

    while (index < x.size())
    {
        int c = x[index] - 'a';
        if (root->chars[c] == NULL)
        {

            return false;
        }
        else
        {
            root = root->chars[c];
            index++;
        }
    }
    if (index == x.size() && root->status == true)
    {
        cout << "the element is present" << endl;
        return true;
    }
    else
    {

        cout << "the element is not present" << endl;
    }
    return false;
}

void removr(trie *root, string x)
{

    if (searcher(x, root) == true)
    {
        int index = 0;
        while (index < x.size())
        {
            int c = x[index] - 'a';
            root = root->chars[c];
            index++;
        }

        root->status = false;
    }
    else{
        cout<<"the word is already not exist !"<<endl;
    }
}


int main()
{
    trie *root2 = new trie();
    trie *root = root2;
    insertr(root, "hello");
    insertr(root, "hell");
    insertr(root, "horse");

    searcher("horse", root);
    removr(root, "horse");
    searcher("horse", root);
}