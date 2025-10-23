#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;

void swap(int* , int*);

int main() {

    int scores[]{100, 96, 90, 83, 63, -1};

    int *score_ptr{scores};
    cout << "while loop: " << endl;
    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
        // can be written as cout << *score_ptr++ << endl; NOT same as (*score_ptr)++  that would be : [0] = 100... meaning that wouldbe 100+1
    }

    // comparing pointers

    string s1{"Stefan"};
    string s2{"Stefan"};
    string s3{"Spasenic"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
    cout << boolalpha;  // false/true instead of 0/1
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl; // here we are checking the value of pointers (meaning the address of the variables they are pointing to) NOT  the value of the variables
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl; // NOW we are checking hte value of the variables ptrs are pointing to
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;


    char name[]{"Stefan"};
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; // S
    char_ptr2 = &name[3]; // f

    cout << "in the string " << name << ", " << *char_ptr2 << "is " << (char_ptr2 - char_ptr1)
         << " characters away from " << *char_ptr1 << endl;


    int a = 10;
    int b = 15;

    int *pA = &a;
    int *pB = &b;
    cout << " before swap func: pA::  " << pA << endl;
    cout << " before swap func: &pA::  " << &pA << endl;

    swap(pA, pB); // here we are techically sending &a and &b;
    return 0;
}

void swap(int *ptr1, int *ptr2){

    cout << " swap func: ptr1:: " << ptr1 << endl;
    cout << " swap func: *ptr1:: " << *ptr1 << endl;
    cout << " swap func: &ptr1:: " << &ptr1 << endl;
    cout << " swap func: ptr2:: " << ptr2 << endl;
};