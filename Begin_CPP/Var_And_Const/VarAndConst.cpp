#include<iostream>
#include<typeinfo>

using namespace std;

// global variable declaration
int globalVar {100};

// defined constants
// dont use defined constants in modern C++
# define PI 3.14

int main()
{
    // static binding done at compile time
    // only integer value is allowed for a
    // a is bound to the memory location
    // variable must be declared before use
    int a = 10;

    // variable names can have letters, numbers and underscores
    // cannot begin with a number
    // cannot use reserved keywords
    // cannot redeclare same name
    // names are case sensative
    // cannot have spaces in between

    // stick to single style guide while naming variables
    // camel case or underscores
    // use meaningful names, avoid shortforms
    // never use variables before declaring them
    // always declare variables close to where you need them in code
    // always initialize a variable

    // uninitialized
    int b;
    // C like initialization, using assignment op
    int c = 20;
    // constructor based initialization
    int d (30);
    // C++11 list initialization
    int e {40};

    // uninitialized warning, depends on compiler
    cout << b << endl;

    // accessing the variables
    cout << "Enter C : ";
    // accept
    cin >> c;

    cout << "Enter D : ";
    // accept
    cin >> d;

    // operations on variables
    e = c*d;

    // printing
    cout << "Multiplication of C and D is : " << e << endl;

    // all the variables declared till now were local variables
    // global variables
    // global variables have global scope
    cout << "Value of global var is : " << globalVar << endl;

    // there are four main primitive types of variables
    // char, int (signed / unsigned), float (float / double) and bool
    // size and capacity is machine dependant

    // one can also use tick marks while initializing the int
    long long largeNumber {123'456'789'000};
    cout << "large number is : " << largeNumber << endl;
    // overflow is possible
    // list style init would warn in case of overflow and C style would not

    // sizeof operator
    cout << "int size is : " << sizeof(int) << " bytes" << endl;
    cout << "long long size is : " << sizeof(largeNumber) << " bytes" << endl;

    // constants
    // they do not change value like variables
    cout << "the value of defined const PI is : " << PI << endl;
    cout << "type of defined constant PI is : " << typeid(PI).name() << endl;
    cout << "size of PI : " << sizeof(PI) << " bytes" << endl;

    // if const keyword is used, the value of the variable cannot be changed
    // the const can be attached to the variable
    const double largeValue {123'456'789'000};
    // largeValue = 123456789001;
    // the prior statement would be an error

    return 0;
}