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
void print_normal(Node* head){
    Node* tmp = head;
    while(tmp!= NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    Node* tmp = tail;
    while(tmp!= NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->pre;
    }
    cout<<endl;
}
void insert_at_any_pos(Node* head, int pos, int val){
    Node* newnode = new Node(val);
    Node* tmp = head;
    while(tmp!= NULL){
        newnode->next = tmp->next;
        tmp->next = newnode;
        newnode->next->pre = newnode;
        newnode->pre =  tmp;
    }
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
            // insert_at_head(head, tail, v);
            // print_head_tail(head, tail); 
        }
        else if (x == 1)
        {
            // inserrt_at_tail(head, tail, v);
            // print_head_tail(head, tail);
        }
    }

    return 0;
}