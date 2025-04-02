// find all subset of a given string array

#include <iostream>
#include <string>
using namespace std;

int isSubstr(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        string substr = "";
        for (int j = i; j < n; j++)
        {
            substr += str[j];
            cout << substr << endl;
        }
    }
}
int main()
{
    string str = "jinal";
    int n = str.length();
    isSubstr(str, n);
    return 0;
}