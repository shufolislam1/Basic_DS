#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_MinNode(Node *head)
{
    Node *tmp = head;
    int min = INT_MAX;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << min << " ";
}
void print_MaxNode(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max << " ";
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
        {
            insert(head, val);
        }
    }
    print_MaxNode(head);
    print_MinNode(head);

    return 0;
}