#include <iostream>
#include <cstring>

using namespace std;

struct trie
{
    int cnt ;
    trie *next[26] ;
    trie()
    {
        cnt = 0 ;
        memset(next , 0 , sizeof(next)) ;
    }
};

trie *root = new trie() ;

void insert(string str)
{
    trie *node = root ;
    for (auto i : str)
    {
        if (!node->next[i-'a']) node->next[i-'a'] = new trie() ;
        node = node->next[i-'a'] ;
    }
    node->cnt++ ;
}

int search(string str)
{
    trie *node = root ;
    for (auto i : str)
    {
        if (!node->next[i-'a']) return 0;
        node = node->next[i-'a'] ;
    }
    return node->cnt ;
}

void erase(node *x)
{
    for (auto i : x->next)
    {
        if (i) erase(i) ;
    }
    delete x ;
}

int main()
{

    return 0;
}
