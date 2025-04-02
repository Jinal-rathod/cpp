// OOPs class and Object

#include <iostream>
using namespace std;

// Class Definition
class Student
{
    // Access Specifier
public:
    // data member
    string name;
    int grid;
    string course;
    int age;

    // defualt constructor (It's no have peramitter)
    Student()
    {
        cout << "Student cansturcter";
    }

    // Constructor (It's have peramitter)
    Student(string name, int grid, string course, int age)
    {
        this->name = name;
        this->grid = grid;
        this->course = course;
        this->age = age;
    }

    // Member function
    void printDetails()
    {
        cout << "Student name : " << this->name << endl;
        cout << "Student grid : " << this->grid << endl;
        cout << "Student course : " << this->course << endl;
        cout << "Student age : " << this->age << endl
             << endl;
    }

    // disstructor
    ~Student()
    {
        cout << "Student disstructer " << endl;
    }
};

int main()
{
    // object with Constructor
    Student s1("Raghuveer", 8580, "B.com", 18);
    Student *s2 = new Student("Jinal", 8579, "Bsc.it", 19);

    // call member function
    s1.printDetails();
    s2->printDetails();

    // destroy instant
    delete s2;
    return 0;
}