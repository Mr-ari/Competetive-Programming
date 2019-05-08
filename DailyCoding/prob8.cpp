#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
};

node * newNode(int data){
    node * nw = new node;
    nw->data = data;
    nw->left = NULL;
    nw->right = NULL;

    return nw;
}


bool countUnivalTree(node * root,int &count){
    if(root == NULL) return true;

    bool l = countUnivalTree(root->left,count);
    bool r = countUnivalTree(root->right,count);

    if(l==false || r==false) return false;

    if( root->left && root->data != root->left->data) return false;
    if( root->right && root->data != root->right->data) return false;
    count++;
    return true;
}

int main(int argc, char const *argv[])
{
    /* code */

    // creating a tree ;
     
     node *root = newNode(0);
     root->left = newNode(1);
     root->right = newNode(0);
     root->right->left = newNode(1);
     root->right->right = newNode(0);
     root->right->left->left = newNode(1);
     root->right->left->right = newNode(1);

    int ans = 0;
    countUnivalTree(root,ans);

    cout << ans<<endl;


    return 0;
}

