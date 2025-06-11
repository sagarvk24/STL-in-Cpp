#include <iostream>
#include <set>
using namespace std;

// Set only stores unique elements and in ascending order
void explainSet()
{
    set<int> st;

    st.insert(4);
    st.insert(16);
    st.insert(10);
    st.insert(6);
    st.insert(2);
    st.insert(14);
    st.insert(12);
    st.insert(8);
    st.insert(6);
    st.insert(10);
    st.insert(2);

    // Traversal
    for (auto it : st)
        cout << it << " ";
    cout << endl;

    // Locating element in the set
    auto it = st.find(12); // if not found, will return end iterator
    if (it != st.end())
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Count of 2 in the set = " << st.count(2) << endl;

    // erase functionality
    st.erase(2);
    for (auto it : st)
        cout << it << " ";

    cout << endl;

    auto itr = st.end();
    itr--;

    st.erase(itr);
    for (auto it : st)
        cout << it << " ";

    cout << endl;
    cout << endl;

    // Erasing multiple elements from the set
    set<int> s2;

    s2.insert(2);
    s2.insert(12);
    s2.insert(123);
    s2.insert(213);
    s2.insert(216);
    s2.insert(873);
    s2.insert(173);
    s2.insert(18);

    for (auto it : s2)
        cout << it << " ";

    cout << endl;
    auto itr1 = s2.begin();
    itr1++;
    itr1++;
    itr1++;

    auto itr2 = s2.end();
    itr2--;
    s2.erase(itr1, itr2); // giving range to erase elements from the set

    for (auto it : s2)
        cout << it << " ";
    cout << endl;

    // lower_bound - returns an iterator which points to an element that is greater than equal to the number given & upper_bound - returns an iterator which points at that is strictly greater than the element given

    auto itr3 = s2.lower_bound(18); // points to 18 (because 18 is in the set)
    cout << *itr3 << " " << endl;
    auto itr4 = s2.upper_bound(18); // points to 873 (because it wants strictly greater than 18)
    cout << *itr4 << " " << endl;
}

int main()
{
    explainSet();

    return 0;
}