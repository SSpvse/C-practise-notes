#include <iostream>
#include <cstring>   // for c-style string functions
#include <cctype>   // for character -based functions
#include <cmath>

using namespace std;

using std::cin;
using std::cout;

void changeNr(int*, int*);

#include <iostream>
#include <string>
    // 412
int sum_of_digits(int n) {   // 12 ->  intPart 1 , lastNr 2   3

    int fractPart = n%10;
    int intPart  = n/10;

    if (intPart < 10 && intPart >= 0) {
        return intPart + fractPart;
    }
    return fractPart + sum_of_digits(intPart); // intPart + 3
}

int main() {

    cout << "return from sum_of_digits: " << sum_of_digits(0) << endl;

/*
    int v = 1;
    int &r = v;
    cout << "&r: " << &r << endl;
    cout << "&v: " << &v << endl;
    cout << "*r: " << r << endl;
    // the &r is just reference to the variable v.. it holds same adress so it becomes an alias .. 2 names for same address
    // r is not a pointer...

    int a = 100;
    int b = 500;

    changeNr(&a, &b);

    {
        // new scope
        int a = 222;
        cout << "(Inside scope) a : " << a << " b : " << b << endl; // it will print "a" that is inside the block first, and for "b" it will first look in localy then go outside the block
        // cant look inside this scope from outside though...
    }

    cout << " a : " << a << " b : " << b << endl;
*/
    return 0;
}



void changeNr(int *a, int *b){ // when parameter is *a then you are expecting to send a pointer adress as argument
    // when you have &a then you are taking in the value of the pointer, "pass by reference"
    // when &a is in parameter we treat a in the function as variable, and a = 100 in this case
    // when we have a* as parameter, then we treat a as a pointer..  and a = address of pointer A , and &a is adress of variable a , and *a is the value of variable a

    cout << "BEFORE- a: " << a << " b: " << b << endl;
    cout << "BEFORE- &a: " << &a << " b: " << &b << endl;
    cout << "BEFORE- *a: " << *a << " *b: " << *b << endl;
    a = b;
    cout << "AFTER- a: " << a << " b: " << b << endl;
    //cout << "AFTER- *a: " << *a << " *b: " << *b << endl;

}