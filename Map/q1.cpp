#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "javascript";
    unordered_map<char, int> map;

    map['a'] = 10;
    map['j'] = 20;
    map['k'] = 30;
    cout << map.size() << endl;

    // value is find in map or not
    if (map.find('a') != map.end())
    {
        cout << map['a'] << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }

    // output : a : 10
    for (auto i : map)
    {
        cout << i.first << ":" << i.second << endl;
    }

    return 0;
}
