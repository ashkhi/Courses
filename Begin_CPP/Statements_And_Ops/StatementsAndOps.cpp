#include<iostream>

using namespace std;

int main()
{
    // expressions are sequence of operands and operators
    // expressions include literals, variable etc.
    // statement is complete line of code that performs some action
    // statement ends with semicolon
    // expressions are used to form statements
    int a = 0;
    int b = 1;
    a+b;
    cout << "a and b sum : " << (a+b) << endl;

    // operators
    // uniary, binary, ternary
    // assignment, arithmetic, increament, decrement, relational, logical, member access, etc.
    int num1 {10}; // init
    int num2 {20}; // init

    // lvalue, rvalue
    num1 = 100; // assignment operator
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    num2 = num1; // assign using variable
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    // type checking is done at compile time
    // const variable cannot be assigned a value after initialization

    // arithmetic operators
    // +,-,*,/ are overloaded operators
    // they acn be used with int, float, double etc.
    // % is a modulo op (rem)
    cout << "rem of division 10 / 3 is : " << (10%3) << endl;
    // keep in mind BODMAS
    // keep in mind integer division

    // increment and decrement operators
    // prefix notation
    ++num1;
    cout << "num1 incremented by 1 : " << num1 << endl;
    // postfix notation
    num1++;
    cout << "num1 incremented by 1 : " << num1 << endl;
    // never overuse this operator
    // never use the operator twice for same operand in same statement
    cout << "num1 incremented by 1 : " << num1++ << " ? why so ?" << endl;
    cout << "twice : " << num1++ + ++num1 << endl;

    // mixed type expressions
    // higher and lower types
    // double > float > unsigned int > int
    // char and short are always converted to int
    // promotion : lower gets converted to higher
    // demotion : higher gets converted to lower
    int num3 {2};
    double num4 {5.3};
    cout << "promotion : " << num3 * num4 << endl;
    num3 = num4;
    cout << "demotion : " << num3 << endl;
    num3 = 2;

    // casting
    // static_cast <type>
    int res {0};
    res = static_cast<int> (num3 * num4);
    cout << "casted result : " << res << endl;

    // equality operators
    // evaluate to bool by comparing two expressions
    cout << "are num1 and num2 equal : " << (num1 == num2) << endl;
    cout << "are num1 and num2 unequal : " << (num1 != num2) << endl;
    // alpha result
    cout << boolalpha;
    cout << "are num1 and num2 equal : " << (num1 == num2) << endl;
    cout << "are num1 and num2 unequal : " << (num1 != num2) << endl;
    // refarin using equality operators for floats and doubles
    cout << noboolalpha;
    cout << "are 2.0 and 1.99999999999999999999 equal : " << (2.0 == 1.99999999999999999999) << endl;

    // relational operators
    // evaluate to bool by comparing two expressions
    // unequal values
    cout << boolalpha;
    cout << "10 > 8 : " << (10 > 8) << endl; 
    cout << "10 >= 8 : " << (10 >= 8) << endl; 
    cout << "10 < 8 : " << (10 < 8) << endl; 
    cout << "10 <= 8 : " << (10 <= 8) << endl; 
    // equal values
    num1 = num2;
    cout << "num1 > num2 : " << (num1 > num2) << endl; 
    cout << "num1 >= num2 : " << (num1 >= num2) << endl; 
    cout << "num1 < num2 : " << (num1 < num2) << endl; 
    cout << "num1 <= num2 : " << (num1 <= num2) << endl;

    // logical operators
    // work on bool and uses bool algebra
    // uniary : !, binary : && ||
    // relational ops have higher priority over logical ops
    // ! > && > || for priority of logical ops

    // short circuit evaluation
    // CPP stops evaluating the expression when it knows the result
    
    // compound assignment operators
    // think of rhs inside para
    num1+=num2;
    cout << "num1 = num1 + num2 : " << num1 << endl;

    // like in maths there is precedence and associativity for CPP ops
    // the precedence and associativity charts can be found online

    return 0;
}