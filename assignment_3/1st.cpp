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

class stack_class {
public:
    Node* top = NULL;

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->val = value;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty() == true) {
            return -1;
        }
        int value = top->val;
        Node* temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

class queue_class {
public:
    Node* front = NULL;
    Node* back = NULL;

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->val = value;
        newNode->next = NULL;
        if (isEmpty()) {
            front = back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
    }

    int pop() {
        if (isEmpty() == true) {
            return -1;
        }
        int value = front->val;
        Node* temp = front;
        front = front->next;
        if (front == NULL) {
            back = NULL;
        }
        delete temp;
        return value;
    }

    bool isEmpty() {
        return front == NULL;
    }
};

bool equal_check(int N, int M, int A[], int B[]) {
    stack_class stack;
    queue_class queue;

    for (int i = 0; i < N; i++) {
        stack.push(A[i]);
    }

    for (int i = 0; i < M; i++) {
        queue.push(B[i]);
    }

    while (stack.isEmpty() == false && queue.isEmpty() == false) {
        int stackValue = stack.pop();
        int queueValue = queue.pop();
        if (stackValue != queueValue) {
            return false;
        }
    }

    // If both stack and queue are empty, the lists are equal
    return stack.isEmpty() && queue.isEmpty();
}

int main() {
    int N, M;
    cin >> N >> M;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int B[M];
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    if (equal_check(N, M, A, B)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
