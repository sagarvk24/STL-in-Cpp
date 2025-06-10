#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Stack is "LIFO - Last In, First Out" data struture
void explainStack()
{
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);

    // Checking for the topmost element
    cout << "Topmost element in the stack = " << st.top() << endl;

    // Checking for the size of stack
    cout << "Size of the Stack = " << st.size() << endl;

    st.pop(); // removes 6 from the stack

    cout << st.top() << " ";

    // In case, stack has multiple elements
    st.push(6);
    st.push(8);
    st.push(10);
    st.push(12);
    st.push(14);
    st.push(16);
    st.push(18);

    cout << endl;
    // to traverse through the stack
    // while (st.empty() == false)
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // OR
    vector<int> stackVector;

    while (!st.empty())
    {
        stackVector.push_back(st.top());
        st.pop();
    }

    // for(int i: stackVector)
    //     cout<<i<<" ";

    for (auto i = stackVector.rbegin(); i != stackVector.rend(); i++)
        cout << *i << " ";

    cout << endl;
}

int main()
{
    explainStack();
    return 0;
}
