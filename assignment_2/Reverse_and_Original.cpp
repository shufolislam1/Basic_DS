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
// int count(Node *&head)
// {

//     int count = 0;
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         count++;
//         tmp = tmp->next;
//     }
//     return count;
// }
void print_rrecursion(Node* n){
    if(n == NULL) return;
    print_rrecursion(n->next);
    cout<<n->val<<" ";
}
void print_rrecursion2(Node* n){
    if(n == NULL) return;
    cout<<n->val<<" ";
    print_rrecursion2(n->next);
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
    print_rrecursion(head);
    cout<<endl;
    print_rrecursion2(head);
    // print_rrecursion(head);

    return 0;
}