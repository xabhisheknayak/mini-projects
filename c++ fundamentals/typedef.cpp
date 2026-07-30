#include <iostream>
using std::cout;
using std::endl;

//using typedef to create an alias for a data type
//new identifier = existing data type
// helps improve code readability and maintainability
// typedef std::string str; // str is now an alias for std::string
using str =std::string; // using declaration to bring std::string into the current scope

int main() {
 str name = "abhishek"; // using the alias str instead of std::string
    cout << "The name is: " << name << endl; // prints the name


    return 0;
}