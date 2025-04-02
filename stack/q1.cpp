#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    cout << stk.size() << endl;
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;
    cout << stk.empty() << endl;
    return 0;
}
