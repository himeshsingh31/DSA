#include <stdio.h>
#include <iostream>

using namespace std;
class TRIE
{
public:
    char data;
    TRIE *arr[26];
    bool isterminal;

    TRIE(char data)
    {
        this->data = data;
        int x = 0;
        for (auto i : arr)
        {
            arr[x] = NULL;
            x++;
        }
        isterminal = false;
    }
};

class triemake
{
public:
    TRIE *root;
    triemake()
    {
        root = new TRIE('\0');
    }

    void insertrie(TRIE *&root, string word)
    {

        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }
        int index = word[0] - 'a';
        TRIE *child;
        if (root->arr[index] != NULL)
        {
            child = root->arr[index];
        }

        else
        {
            child = new TRIE(word[0]);
            root->arr[index] = child;
        }

        insertrie(child, word.substr(1));
    }

    void triemaker(string word)
    {
        insertrie(root, word);
    }

    bool finder(TRIE *root, string word, int starter)
    {

        if (word.length() == starter)
        {
            if (root->isterminal == true)
            {
                return true;
            }

            else
            {
                return false;
            }
        }

        int index = word[starter] - 'a';
        TRIE *child;
        if (root->arr[index] != NULL)
        {

            child = root->arr[index];
        }
        else
        {
            return false;
        }

        return finder(root->arr[index], word, ++starter);
    }

    bool searchmaker(string word)
    {

        return finder(root, word, 0);
    }

    void deleter(TRIE *&root, string word, int starter)
    {
        if(word.length()==starter){
            root->isterminal =false;
            return;
        }

            TRIE *child;
            int index = word[starter] - 'a';
            child = root->arr[index];

            deleter(child, word, starter+1);
        
    }
    
    void deleteit(string word)
    {int starter =0;
        if(searchmaker(word)==true){
            
            deleter(root, word,starter);
            return;
        }
        else
        {
            cout << "the word is not in the list." << endl;
            return;
        }
    }


};

int main()
{
    triemake x;
    x.triemaker("himesh");
    x.triemaker("himesh ki car");
    x.triemaker("arihant");
    x.triemaker("arihant ki car");
    x.triemaker("arihant ka house");
    x.triemaker("daulat");
    x.triemaker("daulat in the house");
    x.triemaker("");

    cout << x.searchmaker("daulat") << endl;


    
    x.deleteit("daulat");
        cout << x.searchmaker("daulat") << endl;






}