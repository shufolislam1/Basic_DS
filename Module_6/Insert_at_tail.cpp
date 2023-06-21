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
void insert_at_tail(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node *tmp  = head;
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }

    tmp->next = newNode;

}
void print(Node *head){
    Node *tmp = head;
    while (tmp!=NULL)
    {
        cout<<"Your linked-list is: "<<endl;
        cout<<tmp->val<<" ";;
        tmp = tmp->next;
    }
    
}
int main()
{
    Node *head = NULL;
    cout << "option 1: Insert at tail: " << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
        int val;
        cout<<"please insert a value: "<<endl;
        cin>>val;
        insert_at_tail(head, val);

    }else if(op == 2){
    print(head);
    }
    return 0;
}