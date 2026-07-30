#include <iostream>
using std::cout;
using std::endl;    

//type coversion is the process of converting one data type to another
//implicit type conversion (automatic type conversion) is performed by the compiler when it encounters an expression
//explicit type conversion (type casting) is performed by the programmer using cast operators
int main() {
    //implicit type conversion
    int a = 10;
    double b = a; // a is implicitly converted to double
    cout << "The value of b is: " << b << endl; // prints 10.0

    //explicit type conversion
    double c = 3.14;
    int d = (int)c; // c is explicitly converted to int using C-style cast
    cout << "The value of d is: " << d << endl; // prints 3

    return 0;
}