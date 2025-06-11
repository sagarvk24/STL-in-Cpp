#include <iostream>
#include <map>
#include <string>
using namespace std;

void explainMap()
{
    map<int, string> mpp;

    mpp[2] = "abc";
    mpp[3] = "bcd";
    mpp[4] = "cde";
    mpp.insert({1, "Sagar"});
    mpp.insert({2, "AB"}); // does not overwrite

    mpp[2] = "AB"; // overwrites

    // traversal - Map works like key value pair
    for (auto it : mpp)
        cout << it.first << " = " << it.second << endl;
    cout << endl;

    auto it = mpp.find(1); // pointing to the location of a key and value

    cout << (*it).second << endl;

    // in case no element is found in the map
    auto itNo = mpp.find(6);
    if (itNo == mpp.end())
        cout << "Key-Value Not Found" << endl;

    cout << mpp.size() << endl;

    auto it1 = mpp.lower_bound(3);
    cout << (*it1).second << endl;

    auto it2 = mpp.upper_bound(3);
    cout << (*it2).second << endl;
}

int main()
{
    explainMap();

    return 0;
}