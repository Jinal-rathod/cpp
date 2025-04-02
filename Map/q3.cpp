// two sum

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[5] = {2, 7, 11, 15, 4};
    unordered_map<int, int> map;
    int t = 6;

    for (int i = 0; i < 5; i++)
    {
        if (map.find(t - arr[i]) != map.end())
        {
            cout << map[t - arr[i]] << " " << i << endl;
            break;
        }
        else
        {
            map[arr[i]] = i;
        }
    }

    return 0;
}
