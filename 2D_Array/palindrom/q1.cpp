// find maximum palindrom in sub string

#include <iostream>
using namespace std;

bool isPlindrom(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i < j)
            {
                if (str[i] == str[j])
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int isSubstring(string str, int n)
{
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        string substr = "";
        for (int j = i; j < n; j++)
        {
            substr += str[j];
            cout << substr << " ";
        }
        cout << endl;
    }
}
int main()
{
    string str = "nayan";
    int n = str.length();

    isSubstring(str, n);
    return 0;
}
