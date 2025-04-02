#include <iostream>
using namespace std;

class A
{
public:
    A() {}

    // concriate mathod
    void print(int x)
    {
        cout << x << endl;
    }
    // signature mathod
    virtual int sum(int a, int b) = 0;
};

class B : public A
{
public:
    B() : A() {}
    int sum(int a, int b) override
    {
        return a + b;
    }
};

int main()
{
    A *a = new B();
    cout << a->sum(10, 10);
    return 0;
}