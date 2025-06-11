#include <iostream>
#include <set>
using namespace std;

// Multiset can store repeating elements; that too in ascending order
void explainMultiset()
{
    multiset<int> ms;

    ms.insert(24);
    ms.insert(6);
    ms.insert(15);
    ms.insert(6);
    ms.insert(24);
    ms.insert(6);
    ms.insert(15);
    ms.insert(24);

    // Traversal
    for (auto it : ms)
        cout << it << " ";

    cout << endl;

    auto it = ms.find(15); // finds the first position
    cout << *it << endl;

    cout << ms.count(24) << endl; 

    auto it1 = ms.erase(24); // all the occurences will get erased

    for (auto it : ms)
        cout << it << " ";

    cout << endl;

    // What if, I just wish to erase single 15
    auto it2 = ms.erase(ms.find(15));

    for (auto it : ms)
        cout << it << " ";

    cout << endl;


}

int main()
{
    explainMultiset();

    return 0;
}