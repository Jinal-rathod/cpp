// basic vector program

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    vec.push_back(6); // add elements
    for (int i = 0; i < 6; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    vec.at(1) = 20; // change elements
    for (int i = 0; i < 6; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << vec.size(); // find size of array
    
    return 0;
}
