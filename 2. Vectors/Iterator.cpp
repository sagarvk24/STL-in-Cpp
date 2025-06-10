#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    // In case of an array, if the size is defined, we cannot add elements more than the size of the array. It has fixed nature
    // Vector is dynamic in nature. We need not to define the size

    vector<int> vect = {1, 2, 3, 4, 5, 6};

    // iterator
    vector<int>::iterator itr = vect.begin(); // it gives me a pointer to the first element position
    cout << *itr + 4 << " " << endl;

    vector<int>::iterator endItr = vect.end(); // it gives me a pointer to the last element position. This gives position after the last element, so:
    // endItr = endItr - 1;

    // traversal using iterator in vectors

    for (vector<int>::iterator i = itr; i < endItr; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Another way is:
    auto startItr = vect.begin();
    auto lastItr = vect.end();

    for (auto i = startItr; i < lastItr; i++)
    {
        cout << *i << " ";
    }

    cout << endl;
    // OR

    for (auto i : vect)
        cout << i << " ";
}

int main()
{
    explainVector();

    return 0;
}