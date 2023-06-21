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
void insert_at_tail(Node *&head, int val)
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
void print(Node *head)
{
    Node *tmp = head;
    cout << "Your linked-list is: " << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void inset_at_any_position(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option 1: Insert at tail" << endl;
        cout << "option 2: print Linked list" << endl;
        cout << "option 3: Insert at any position " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "please insert a value: " << endl;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Pleaase enter possition and value: " << endl;
            cin >> pos >> v;
            inset_at_any_position(head, pos, v);
        }
    }
    return 0;
}
