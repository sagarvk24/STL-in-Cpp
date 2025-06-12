#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

void explainSort()
{
    int arr[6] = {6, 2, 1, 7, 5, 4};

    sort(arr, arr + 6);

    // for (int i = 0; i < 6; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    // suppose to sort only some elements in the array
    int arr2[6] = {6, 2, 1, 7, 5, 4};

    sort(arr2 + 2, arr2 + 6);

    for (auto x : arr2)
        cout << x << " ";
    cout << endl;

    // in case of vectors
    vector<int> v = {4, 1, 3, 2, 5, 7, 6, 9, 8};

    sort(v.begin(), v.end());

    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void explainAccumulate()
{
    int arr[6] = {6, 2, 1, 7, 5, 4};

    cout << accumulate(arr, arr + 6, 0) << endl; // 0 means initial sum
    cout << accumulate(arr, arr + 6, 2) << endl; // here, 2 means initial sum

    cout << accumulate(arr + 2, arr + 6, 0) << endl;
}

void explainCount()
{
    int arr[9] = {6, 2, 1, 1, 1, 1, 7, 5, 4};

    int num = 1;

    cout << count(arr, arr + 9, num); // here, num means what to count
}

void explainFind()
{
    int arr[6] = {6, 2, 1, 7, 5, 4};

    auto it = find(arr, arr + 6, 1); // will return an iterator pointing to 1 in the array
    // cout << *it << endl;

    // in case there is no element
    auto it1 = find(arr, arr + 6, 9);
    if (it1 == (arr + 6))
        cout << "Not Found" << endl;
}

void explainNextPermutation()
{
    string str = "abc";

    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    cout << endl;

    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end() - 1));
}

void explainPrevPermutation()
{
    string str = "cba";

    do
    {
        cout << str << endl;
    } while (prev_permutation(str.begin(), str.end()));

    cout << endl;
}

void explainMaxElement()
{
    int arr[6] = {6, 2, 1, 7, 5, 4};

    auto it = *max_element(arr, arr + 6);

    cout << it << endl;
}

void explainMinElement()
{
    int arr[6] = {6, 2, 1, 7, 5, 4};

    auto it = *min_element(arr, arr + 6);

    cout << it << endl;
}

void explainReverse()
{
    int arr[6] = {6, 2, 1, 7, 5, 4};

    reverse(arr, arr + 6);

    for (int x : arr)
        cout << x << " ";
    cout << endl;
    cout << endl;

    // in case of vectors
    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    reverse(v.begin(), v.end());
    for (auto it : v)
        cout << it << " ";
    cout << endl;
}

bool internalComparator(int el1, int el2)
{
    if (el1 < el2)
        return false;
    return true;
}

bool comparator2(pair<int, int> element1, pair<int, int> element2)
{
    if (element1.second > element2.second)
        return true;

    if (element1.second < element2.second)
        return false;

    if (element1.first < element2.first)
        return true;

    return false;
}

void explainComparator()
{
    int arr[6] = {6, 2, 1, 7, 5, 4};

    sort(arr, arr + 6); // ascending order sort

    for (int x : arr)
        cout << x << " ";
    cout << endl;
    cout << endl;

    // here, for example, 6 and 2 are compared by an internal comparator, which tells whether element1 should appear before or after element2

    // now in case we need to sort in descending order
    int arr2[6] = {16, 22, 31, 57, 65, 14};

    sort(arr2, arr2 + 6, internalComparator);

    for (int x : arr2)
        cout << x << " ";
    cout << endl;
}

void explainComparator2()
{
    pair<int, int> arr[] = {{1, 6}, {1, 18}, {2, 4}, {2, 9}, {3, 5}, {7, 9}};

    // now, we want to sort the array, based on the second element of the pair
    // in case of 2 same second element, pick one with the smaller first element

    sort(arr, arr + 6, comparator2);

    for (auto x : arr)
        cout << "{" << x.first << ", " << x.second << "}" << endl;
    cout << endl;
}

int main()
{
    // explainSort();
    // explainAccumulate(); //provides accumulated sum for the elements of the array
    // explainCount();
    // explainFind();
    // explainNextPermutation(); // prints all the next possible permutations for the string, in a sorted manner
    // explainPrevPermutation();
    // explainMaxElement();
    // explainMinElement();
    // explainReverse();
    // explainComparator();
    explainComparator2(); // explaining a complex example

    return 0;
}