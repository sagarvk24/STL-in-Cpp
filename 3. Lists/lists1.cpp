#include <iostream>
#include <list>
using namespace std;

// List is also a container. What sets list apart is that it allows to insert elements in front ("push_front")
void explainList()
{
    list<int> ls = {4, 6};

    ls.push_front(2);

    for (int i : ls)
        cout << i << " ";
    cout << endl;

    cout << ls.front() << endl;
}

int main()
{
    explainList();
}