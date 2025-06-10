#include <iostream>
#include <utility>
using namespace std; // or std::pair

void explainPair()
{
    pair<int, int> pr1 = {18,24};
    //OR
    pair<int, int> pair2 = make_pair(2, 8);

    //we can also store different data types inside a pair
    pair<int, char> pr3 = make_pair(18, 's');
    pair<int, string> pr4 = make_pair(18, "Virat");

    //also, nested pair can be created
    pair<pair<int, char>, int> pr5 = {{18, 'v'}, 24};

    cout<<pr1.first<<" "<<pr1.second<<endl;
    cout<<pair2.first<<" "<<pair2.second<<endl;
    cout<<pr3.first<<" "<<pr3.second<<endl;
    cout<<pr4.first<<" "<<pr4.second<<endl;
    cout<<pr5.first.first<<" "<<pr5.first.second<<" "<<pr5.second<<endl;
}

int main()
{
    explainPair();
    return 0;
}