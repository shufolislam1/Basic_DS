#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        // 1. line theke ano
        Node *rootNode = q.front();
        q.pop();

        // jabotio sokol kaj koro.
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        rootNode->left = myLeft;
        rootNode->right = myRight;

        // tar child gula (rootNode) line e push kora
        if (rootNode->left != NULL)
            q.push(rootNode->left);
        if (rootNode->right != NULL)
            q.push(rootNode->right);
    }
    return root;
}
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}
int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);

    return l + r + 1;
}

int main()
{
    Node *root = input_tree();
    int height = max_height(root);
    int nodes = count_node(root);

    int totalNode = pow(2, height) - 1;
    if (totalNode == nodes)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}