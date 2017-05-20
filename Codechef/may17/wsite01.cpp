#include <bits/stdc++.h>
using namespace std;
 
 
#define SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
 
struct TrieNode
{
    struct TrieNode *children[SIZE];
    bool isLeaf;
};

struct TrieNode *getNode(void)
{
    struct TrieNode *Node = NULL;
 
    Node = (struct TrieNode *)malloc(sizeof(struct TrieNode));
 
    if (Node)
    {
        int i;
        Node->isLeaf = false;
 
        for (i = 0; i < SIZE; i++)
            Node->children[i] = NULL;
    }
 
    return Node;
}

void insert(struct TrieNode *root, string key)
{
    int level;
    int length = key.length();
    int index;
 
    struct TrieNode *p = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
        if (!p->children[index])
            p->children[index] = getNode();
 
        p = p->children[index];
    }
    p->isLeaf = true;
}

int search(struct TrieNode *sroot, string key)
{
    int level;
    int length = key.length();
    int index;
    struct TrieNode *p1 = sroot;
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
 
        if (!p1->children[index])
            return level;
 
        p1 = p1->children[index];
    }
 
    return -1 ;
}

int main() 
{
	// your code goes here
    long int n;
    char c[100000];
    string s[100000];
    set<string> ans;
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>c[i]>>s[i];
 
  
    struct TrieNode *root2 = getNode();
    
    for (int i = 0; i < n; i++)
    { 
        if(c[i]=='+')
        insert(root2, s[i]);
    }   
    int x,k=0,x1=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='-')
        {   x1++;
            x=search(root2,s[i]);
            if(x!=-1)
            {   
                k++;
                ans.insert(s[i].substr(0,x+1));
            }
        }
    }
    if(k==0 || k<x1)
    cout<<"-1";
    else
    {
        cout<<ans.size()<<endl;
        set<string>::iterator it;
        for (it = ans.begin(); it != ans.end(); ++it)
        cout<<*it<<endl;
    }
    
    return 0;
}
 
