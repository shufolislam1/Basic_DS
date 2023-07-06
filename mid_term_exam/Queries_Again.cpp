#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;
    cout<<"L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout<<"R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
    cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->pre = newNode;
    head = newNode;

}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;

}
int size_count(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_any_pos(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->pre = newnode;
    newnode->pre = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_normal(head);
            print_reverse(tail);
            // print_head_tail(head, tail);
        }
        else if (x == size_count(head))
        {
            insert_at_tail(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x > size_count(head))
        {
            cout << "Invalid" << endl;
            
        }
        else
        {
            insert_at_any_pos(head, x, v);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}