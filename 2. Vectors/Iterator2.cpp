#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    auto reverseBegin = vec.rbegin(); // will point to the memory reference of the last element in the vector

    auto reverseEnd = vec.rend(); // will point to memory reference, somwhere before the first element in the vector

    for (auto i = reverseBegin; i < reverseEnd; i++)
        cout << *i << " ";

    // cout << endl;
    // for (auto i : vec)
    //     cout << i << " ";

    cout << endl;

    // In case of Vector definition only
    vector<int> a1(5);
    vector<int> a2(5, 6);
    a1.push_back(1);
    a1.push_back(2);
    a1.push_back(3);

    for (int i : a1)
        cout << i << " ";
    cout << endl;

    a2.push_back(4);
    a2.push_back(5);
    a2.push_back(6);

    for (auto i : a2)
        cout << i << " ";

    // Duplicating a vector
    vector<int> duplicateVector(a1);

    // Duplicating a vector, from some specific position

    vector<int> dupVector2(vec.begin() + 1, vec.end());
    cout << endl;
    for (auto i : dupVector2)
        cout << i << " ";

    cout << endl;
    // Accessing the front and back elements

    cout << vec.front() << endl;
    cout << vec.front() + 2 << endl;

    cout << vec.back() << endl;
    cout << vec.back() - 2 << endl;

    // Deleting elements
    vec.pop_back();
    cout << vec.back() << endl;

    // Erasing elements from the vector
    vec.erase(vec.begin(), vec.end() - 3);
    for (auto i : vec)
        cout << i << " ";
    cout << endl;

    vec.clear();

    // accessing the element
    cout << a1.at(6) << endl;

    // Swapping the elements of 2 vectors

    vector<int> v1 = {2, 4};
    vector<int> v2 = {18, 24};

    swap(v1, v2);

    for (int element : v1)
        cout << element << " ";
    cout << endl;

    // Inserting a value at an specific position
    v2.insert(v2.begin() + 2, 6);
    for (int element : v2)
        cout << element << " ";
    cout << endl;
}

int main()
{
    explainVector();

    return 0;
}