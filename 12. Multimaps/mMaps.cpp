#include <iostream>
#include <map>
using namespace std;

// can store elements in a fashion : same key -- different values can exist
void explainMultimap()
{
    multimap<int, char> mpp;

    mpp.insert({1, 'a'});
    mpp.insert({1, 'A'});
    mpp.insert({2, 'b'});
    mpp.insert({2, 'B'});
    mpp.insert({2, 'e'});
    mpp.insert({3, 'c'});
    mpp.insert({3, 'f'});
    mpp.insert({4, 'D'});
    mpp.insert({4, 'd'});

    // Traversal
    for (auto it : mpp)
        cout << it.first << " = " << it.second << endl; // Sort based on key

    cout << endl;
    auto it = mpp.equal_range(2); // return pair of iterators (starting and ending, range)

    for (auto i = it.first; i != it.second; i++)
        cout << (*i).first << " = " << (*i).second << endl;

    
}

int main()
{
    explainMultimap();
    return 0;
}