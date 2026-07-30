#include <iostream>
int main() {
    int a[]={1,2,3,4,5};
    for (int num : a) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}