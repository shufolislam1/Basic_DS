#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll, marks;
    student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->name = name;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks == b.marks)
            return a.roll > b.roll; // Select the student with smaller roll if marks are the same
        else
            return false;
    }
};

int main()
{
    int t;
    cin >> t;
    priority_queue<student, vector<student>, cmp> pq;
    while (t--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << "\n";
        }
        else if (x == 1)
        {
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << "\n";
            }
        }
        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << "\n";
            }
        }
    }

    return 0;
}
