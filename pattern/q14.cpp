// Alphabet Pyramind

#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'D'; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}