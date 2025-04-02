// find frist and last same charecter word an count it and print

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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string substr = "";
        for (int j = i; j < n; j++)
        {
            substr += str[j];
            if (isPlindrom(str, n))
            {
                if (substr.length() > 1 && substr[0] == substr[substr.length() - 1])
                {
                    count++;
                }
            }
        }
    }
    cout << count << " ";
}
int main()
{
    string str = "nayan";
    int n = str.length();
    isSubstring(str, n);
    return 0;
}