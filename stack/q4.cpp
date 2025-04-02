#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int index;
    int size;

    Stack(int n)
    {
        this->size = n;
        arr = new int[n];
        index = -1;
    }

    void push(int value)
    {
        if (index < this->size)
        {
            arr[++index] = value;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }

    void pop()
    {
        if (index != -1)
        {
            arr[index--] = -1;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }

    void print()
    {
        for (int i = 0; i <= this->index; i++)
        {
            cout << arr[i] << endl;
        }
    }

    int top()
    {
        if (index != -1)
        {
            return arr[index];
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }

    int length()
    {
        return index + 1;
    }

    bool empty()
    {
        return index == -1;
    }
};

int main()
{
    Stack *stk = new Stack(3);
    stk->push(5);
    stk->push(5);
    stk->push(5);
    stk->pop();
    stk->print();
    return 0;
}