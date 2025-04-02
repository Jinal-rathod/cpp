// multiple inheritance

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int a)
    {
        this->a = a;
    }
    void printA()
    {
        cout << "a : " << a << endl;
    }
};
class B
{
public:
    int a;
    B(int a)
    {
        this->a = a;
    }
    void printB()
    {
        cout << "b : " << a << endl;
    }
};
class C : public A, public B
{
public:
    C(int a) : A(a), B(a) {}
    void printC()
    {
        cout << "class c";
    }
};
int main()
{
    C c(30);
    c.printA();
    c.printB();
    c.printC();
    return 0;
}