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
void level_order_print(Node *root, int searchedLevel)
{
    // vector<int> v;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;

    while (q.empty() != true)
    {
        // line theke ber kore ana
        pair<Node *, int> parent = q.front();
        Node *node = parent.first;
        int level = parent.second;
        q.pop();

        // jabotio sokol kaj koro
        if (level == searchedLevel)
        {
            cout << node->val << " ";
            found =  true;
        }

        // tar child gula (f er) ke line e push/dhukaia dewa. tar age NULL check korte hobe
        if (node->left != NULL)
            q.push({node->left, level + 1});
        if (node->right != NULL)
            q.push({node->right, level + 1});
    }
    if(!found) cout<<"Invalid"<<endl;
    else cout<<endl;

}
int main()
{
    Node *root = input_tree();
    int leevel;
    cin >> leevel;
    level_order_print(root, leevel);
    return 0;
}
