// anagram

#include <iostream>
using namespace std;

int main()
{
    // string str, str2;
    // cin >> str >> str2;
    string str = "nayan";
    string str2 = "nayna";
    int n = str.length();
    int m = str2.length();
    if (n != m)
    {
        cout << "Not Anagram";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (str[i] == str2[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << "Not Anagram";
            return 0;
        }
    }
    cout << "Anagram";

    return 0;
}