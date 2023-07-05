#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// reverse er kahini ta aro valo vaabe bojhaa lagbe

void reverse(Node*& head, Node* tmp) {
    if (tmp->next == NULL) {
        head = tmp;
        return;
    }
    reverse(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}
void print_list(Node* head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
bool isPalindrom(Node* head) {
    Node* newHead = NULL;
    Node* newTail = NULL;

    Node* tmp = head;
    while (tmp != NULL) {
        insert_at_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    
    reverse(newHead, newHead);
    // print_list(newHead);
    tmp = head;
    Node* tmp2 = newHead;
    while (tmp != NULL) {
        if (tmp->val != tmp2->val) {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
}


// bool isPalindrom(Node* head)
// {
//     Node* slow = head;
//     Node* fast = head;

//     // Find the middle node using the slow and fast pointers
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // Reverse the second half of the linked list
//     Node* secondHalf = NULL;
//     Node* tmp = slow;
//     while (tmp != NULL)
//     {
//         Node* nextNode = tmp->next;
//         tmp->next = secondHalf;
//         secondHalf = tmp;
//         tmp = nextNode;
//     }

//     // Compare the first half and reversed second half
//     while (secondHalf != NULL)
//     {
//         if (head->val != secondHalf->val)
//         {
//             return false;
//         }
//         head = head->next;
//         secondHalf = secondHalf->next;
//     }

//     return true;
// }


int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        int val;
        cin >> val;
        if (val == -1)
            break; // Exit the loop if -1 is entered

        insert_at_tail(head, tail, val);
    }

    bool res = isPalindrom(head);
    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
