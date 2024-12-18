// Continuous Alphabet Pyramid

#include <iostream>
using namespace std;

int main()
{
    char count = 'A';
    for (char i = 'A'; i <= 'D'; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}