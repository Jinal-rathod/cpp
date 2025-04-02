// push elements in bottom

#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> s)
{
    while (!(s.empty()))
    {
        cout << s.top() << endl;
        s.pop();
    }
}

void insertAtBottom(stack<int> s, int value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(top);
}

int main()

    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    print(s);
    insertAtBottom(s, 5);
    print(s);
    return 0;
}