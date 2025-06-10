#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void explainPQ()
{
    // In this manner, it becomes a min heap, where smallest element stands at the topmost level
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(6);
    pq.push(4);
    pq.push(8);
    pq.push(18);
    pq.push(2);
    pq.push(24);
    pq.push(12);

    cout << pq.top() << " " << endl;
}

int main()
{
    explainPQ();
    return 0;
}