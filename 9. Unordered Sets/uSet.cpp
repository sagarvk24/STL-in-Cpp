#include <iostream>
#include <unordered_set>
using namespace std;

// Does not maintain order but stores unique elements
void explainUnorderedSet()
{
    unordered_set<int> st; //has better time complexity

    st.insert(1);
    st.insert(2);
    st.insert(12);
    st.insert(11);
    st.insert(31);
    st.insert(21);
    st.insert(24);
    st.insert(18);

    for (auto it : st)
        cout << it << " ";
    cout << endl;

    auto it = st.find(11); // O(1) time complexity
    
}

int main()
{
    explainUnorderedSet();

    return 0;
}