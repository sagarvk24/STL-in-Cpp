#include <iostream>
#include <unordered_map>
using namespace std;

// No maintained order - Time Complexity is better O(1) - Constant
void explainUnorderedMap()
{
    unordered_map<int, string> mpp;

    mpp[2] = "abc";
    mpp[4] = "cde";
    mpp[3] = "bcd";
    mpp.insert({1, "Sagar"});

    for (auto it : mpp)
        cout << it.first << " = " << it.second << endl;
    cout << endl;
}

int main()
{
    explainUnorderedMap();

    return 0;
}