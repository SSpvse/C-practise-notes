#include <iostream>

// using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    int age;
    int entryAge = 21;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 21) {
        std::cout << "Great, you are old enough to enter! ";
    }else{
        std::cout << "Sorry , youre not old enough! ";
    }
    std::cout << "Because " << entryAge << "is the entry level."<< std::endl;
    return 0;
}