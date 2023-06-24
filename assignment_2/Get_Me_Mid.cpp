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
int count(Node *&head)
{

    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void inserrt_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void descending_middle(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    int nodeCount = count(head);
    int middleIndex = nodeCount / 2;
    if (nodeCount % 2 != 0)
    {
        // Odd number of nodes, print the middle element
        Node *middleNode = head;
        for (int i = 0; i < middleIndex; i++)
        {
            middleNode = middleNode->next;
        }
        cout << middleNode->val << endl;
    }
    else
    {
        // Even number of nodes, print the middle two elements
        Node *middleNode1 = head;
        Node *middleNode2 = head;
        for (int i = 0; i < middleIndex - 1; i++)
        {
            middleNode2 = middleNode2->next;
        }
        for (int i = 0; i < middleIndex; i++)
        {
            middleNode1 = middleNode1->next;
        }
        cout << middleNode2->val << " " << middleNode1->val << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
        {
            inserrt_at_tail(head, tail, val);
        }
    }
    descending_middle(head);
    return 0;
}