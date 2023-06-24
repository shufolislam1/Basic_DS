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
// etar complexity besi loop thakar karron e
int count(Node *&head)
{

    int count = 0;
    Node *tmp = head;
    while (tmp->next != NULL)
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
void same_checker(Node *head1, Node *head2)
{
    int one = count(head1);
    int two = count(head2);
    bool flag = false;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val == head2->val)
        {
            flag = true;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (flag == true && (one == two))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
        {
            inserrt_at_tail(head1, tail1, val);
        }
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        else
        {
            inserrt_at_tail(head2, tail2, val);
        }
    }
    same_checker(head1, head2);
    // int one = count(head1, val);
    // int two = count(head2, val);

    // if (flag == true && (one == two))
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    // bool flag = false;

    // for (Node *i = head; i->next != NULL; i = i->next)
    // {
    //     for (Node *j = i->next; j != NULL; j = j->next)
    //     {
    //         if (i->val == j->val)
    //         {
    //             flag = true;
    //         }
    //     }
    // }
    // if (flag == true)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
    return 0;
}