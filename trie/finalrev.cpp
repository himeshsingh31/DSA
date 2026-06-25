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

void inserter(trie *root, string xyz)
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

};

int main()
{
    trie *root = new trie();
    inserter(root, "hello");
    inserter(root, "hell");
}