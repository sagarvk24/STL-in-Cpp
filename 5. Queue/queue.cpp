#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

// Queue allows - FIFO (First In, First Out)
void explainQueue()
{
    queue<int> q;
    queue<int> q1;
    queue<int> q2;

    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    q.push(12);
    q.push(14);
    q.push(16);
    q.push(18);

    // traversal of Queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << endl;

    q1.push(2);
    q1.push(4);
    q1.push(6);
    q1.push(8);
    q1.push(10);
    q1.push(12);
    q1.push(14);
    q1.push(16);
    q1.push(18);

    // What if we have to print the elements in reverse order (Rear -> Front)
    // Option 1: Use a Stack
    stack<int> st;

    while (!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }

    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    cout << endl;
    // Option 2: Use a vector
    vector<int> vec;
    q2.push(2);
    q2.push(4);
    q2.push(6);
    q2.push(8);
    q2.push(10);
    q2.push(12);
    q2.push(14);
    q2.push(16);
    q2.push(18);

    while (!q2.empty())
    {
        vec.push_back(q2.front());
        q2.pop();
    }

    for (int i = vec.size() - 1; i >= 0; i--)
        cout << vec[i] << " ";
    cout << endl;
}

int main()
{
    explainQueue();
    return 0;
}