// find count the vowel in string

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int count1 = 0, count2 = 0;
    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count1++;
        }
    }
    cout << "Vowels : " << count1 << endl;
    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
        }
        else
        {
            count2++;
        }
    }
    cout << "Alphabet : " << count2 << endl;
    return 0;
}
