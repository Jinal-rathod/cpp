// singal inheritance

#include <iostream>
using namespace std;

class Add
{
public:
    int a;
    int b;
    Add(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int sum()
    {
        return a + b;
    }
};
class AddSub : public Add
{
public:
    int a;
    int b;

    AddSub(int a, int b) : Add(a, b)
    {
        this->a = a;
        this->b = b;
    }

    int sub()
    {
        return a - b;
    }
};
int main()
{
    Add add(20, 30);
    cout << add.sum() << endl;

    AddSub addsub(50, 30);
    cout << addsub.sub() << endl;
    cout << addsub.sum() << endl;
    return 0;
}
