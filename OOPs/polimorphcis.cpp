#include <iostream>
using namespace std;

class ClaC
{
public:
    ClaC() {};

    // function overload / method overload
    int sum(int a, int b)
    {
        return a + b;
    }
    double sum(double a, double b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    // method
    virtual void print()
    {
        cout << "ClaC" << endl;
    }
};

class Calculation : public ClaC
{
public:
    Calculation() {};

    // function override / method override
    void print() override
    {
        cout << "Calculation" << endl;
    }
};

int main()
{
    ClaC *cla = new ClaC();
    cout << cla->sum(10, 20, 50) << endl;

    Calculation *cla = new Calculation();
    cla->print();
    return 0;
}