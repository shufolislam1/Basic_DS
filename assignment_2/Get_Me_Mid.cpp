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
    int node_Count = count(head);
    int mid_Index = node_Count / 2;
    if (node_Count % 2 != 0)
    {

        Node *middle_Node = head;
        for (int i = 0; i < mid_Index; i++)
        {
            middle_Node = middle_Node->next;
        }
        cout << middle_Node->val << endl;
    }
    else
    {
        Node *middle_Node1 = head;
        Node *middle_Node2 = head;
        for (int i = 0; i < mid_Index - 1; i++)
        {
            middle_Node2 = middle_Node2->next;
        }
        for (int i = 0; i < mid_Index; i++)
        {
            middle_Node1 = middle_Node1->next;
        }
        cout << middle_Node2->val << " " << middle_Node1->val << endl;
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