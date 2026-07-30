#include<iostream>
using std::cout;
using std::endl;
namespace first{
    int x=1;
}

int main(){

     //namespace = prevents name conflicts in larger projects
        //            allows reuse of names in different contexts


        int x = 0; // local variable x
        cout << "Local x: " << x << endl; // prints local x
        cout << "First namespace x: " << first::x << endl; // prints x from first namespace

    return 0;
}