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
    tail = newNode;
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << "Your linked-list is: " << endl;
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void sort_asending(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
void search_unique(Node* head){
    Node* tmp = head;
    while(tmp->next != NULL){
        if(tmp->val == tmp->next->val){
            // Node* deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            // delete deleteNode;
        }
        if(tmp->next == NULL) break;
        else if(tmp->val != tmp->next->val){
            tmp = tmp->next;
        }
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
            break; // Exit the loop if -1 is entered
        insert_at_tail(head, tail, val);
    }
    sort_asending(head);
    search_unique(head);
    print(head);

    // int val;
    // cin >> val;
    // insert_at_tail(head, tail, val);
    // sort_asending(head);
    // print(head);
    return 0;
}