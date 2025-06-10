#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    // In case of an array, if the size is defined, we cannot add elements more than the size of the array. It has fixed nature
    // Vector is dynamic in nature. We need not to define the size

    vector<int> vect;

    // insertion
    vect.push_back(1); // creates a temporary object and moves it into the container
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    // OR
    vect.emplace_back(5); // constructs an object in place
    vect.emplace_back(6);

    // size of the vector
    cout << "Size of the vector :" << vect.size() << endl;

    // traversal
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] * 2 << " ";
    cout << endl;

    
}

int main()
{
    explainVector();

    return 0;
}