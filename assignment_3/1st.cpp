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

class stack_class
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    int top()
    {
        return v.back();
    }

    void pop()
    {
        v.pop_back();
    }

    bool empty()
    {
        return v.empty();
    }
};

class queue_class
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int szz = 0;

    void push(int value)
    {
        szz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int front()
    {
        return head->val;
    }

    void pop()
    {
        szz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    bool empty()
    {
        return szz == 0;
    }
};

bool equal_check(int N, int M, int A[], int B[])
{
    stack_class stack;
    queue_class queue;

    for (int i = 0; i < N; i++)
    {
        stack.push(A[i]);
    }

    for (int i = 0; i < M; i++)
    {
        queue.push(B[i]);
    }

    if (stack.empty() != queue.empty())
    {
        return false;
    }

    while (!stack.empty() && !queue.empty())
    {
        int stackValue = stack.top();
        int queueValue = queue.front();

        if (stackValue != queueValue)
        {
            return false;
        }

        stack.pop();
        queue.pop();
    }

    return stack.empty() && queue.empty();
}

int main()
{
    int N, M;
    cin >> N >> M;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int B[M];
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    if (equal_check(N, M, A, B))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
