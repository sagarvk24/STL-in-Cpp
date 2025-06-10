#include <iostream>
#include <queue>
using namespace std;

// Priority Queue stores highest element at the topmost level - underneath tree is implemented
void explainPQ()
{
    priority_queue<int> pq;

    pq.push(6);
    pq.push(4);
    pq.push(8);
    pq.push(18);
    pq.push(2);
    pq.push(24);
    pq.push(12);

    cout << pq.top() << " " << endl;

    pq.pop(); // removes the greatest element, i.e. 24 in this case

    // Traversal
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    explainPQ();
    return 0;
}