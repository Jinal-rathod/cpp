// palindrome

#include <iostream>
#include <string>
using namespace std;

bool isRevers(string str, int n)
{
    string str2;
    // method : 1
    for (int i = n - 1; i >= 0; i--)
    {
        str2 += str[i];
    }
    cout << str2 << endl;
    return str2 == str;

    // method : 2
    for (char c : str)
    {
        str2 = c + str2;
    }
    cout << str2 << endl;
    return str2 == str;
}
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    cout << isRevers(str, n);
    return 0;
}