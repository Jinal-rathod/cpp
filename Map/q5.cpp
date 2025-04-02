// Doublicat

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "testing";
    unordered_map<char, int> map;

    for (char c : str)
    {
        if (map.find(c) != map.end())
        {
            map[c] = map[c] + 1;
        }
        else
        {
            map[c] = 1;
        }
    }

    int count = 0;
    for (auto pair : map)
    {
        if (pair.second > 1)
        {
            cout << pair.first << " ";
            count++;
        }
    }
    cout <<endl << "Total Doublicat : " << count << endl;
    return 0;
}
