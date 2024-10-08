#include <bits/stdc++.h>
using namespace std;

// Node Creation.
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sumatK(Node *root, int K){
    if(root==NULL)
        return -1;
    // We are assuming that there are no negative elements in our tree.
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while (!q.empty()){
        Node *node = q.front();
        q.pop();

        if(node!=NULL){
            if(level==K){
                sum += node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        else if(q.empty()){
            q.push(NULL);
            level++;
        }
        }
        return sum;
    }
}

int main(){
    //  Tree Creation.
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Calling the function.
    cout << sumatK(root, 2) << endl;
    return 0;
}