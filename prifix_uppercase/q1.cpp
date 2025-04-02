// convert all frist charcter in uppercase in string array

#include <iostream>
using namespace std;

int main()
{
    string str = "hello node js rect js dsa";
    int n = str.length();

    str[0] = toupper(str[0]);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    cout << str << endl;

    return 0;
}