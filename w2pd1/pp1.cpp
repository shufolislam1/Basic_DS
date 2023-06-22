#include <bits/stdc++.h>
using namespace std;
class shufol
{
public:
    int val;
    shufol *next;
    shufol(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void input_linked_list(shufol *&head, int val)
{
    shufol *newNode = new shufol(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    shufol *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked_list(shufol *head)
{
    shufol *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void size_of_linked_list(shufol *head)
{
    int count =0;
    shufol *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout<<count<<endl;
}
int main()
{
    shufol *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            input_linked_list(head, val);
        }
    }
    size_of_linked_list(head);

    return 0;
}