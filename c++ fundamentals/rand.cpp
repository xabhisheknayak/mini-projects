#include<iostream>
#include<ctime>
using std::cout;
using std::endl;


int main(){
        //using rand() function to generate random numbers
        //rand() generates pseudo-random numbers, which means they are deterministic and can be reproduced if the same seed is used
        //srand() is used to set the seed for rand() function, which determines the sequence of random numbers generated. If you want different random numbers each time you run the program, you can use the current time as the seed.

        srand(time(NULL)); // setting the seed for rand() using the current time
        int num = rand() % 6 + 1; // generates a random number between 1 and 6  
        cout << "Random number: " << num << endl; // prints a random number



    return 0;
}