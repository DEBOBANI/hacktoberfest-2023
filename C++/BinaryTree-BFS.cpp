#include <bits/stdc++.h>
using namespace std;

//------personal macro decelaration------
#define ll long long
#define tc    \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define pi 3.14159265358979323846
//------code begin from here------

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr, right = nullptr;
    }
};

void bfs(Node *node)
{

    if (node == nullptr)
        return;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        auto node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left)
            q.push(node->left);

        if (node->right)
            q.push(node->right);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->left->right->left = new Node(9);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(8);
    bfs(root);
    return 0;
}
