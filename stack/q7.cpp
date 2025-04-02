// revers the stack

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

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, top);
}

int main()

    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    // print(s);
    // insertAtBottom(s, 5);
    // print(s);
    reverse(s);
    print(s);
    return 0;
}