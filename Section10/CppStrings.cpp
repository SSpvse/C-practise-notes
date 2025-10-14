#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {

    string s1;  // Empty
    string s2{"Frank"};  //Frank
    string s3{s2};              // Frank
    string s4{"Frank", 3};      // Fra
    string s5{s3, 0, 2};  // Fr
    string s6(3, 'X');  // XXX

    // concatenation

    string part1{"C++"};
    string part2{"is a powrful"};

    string sentence;

    sentence = part1 + "" + part2 + " language";
    cout << sentence;


    string a1;
    string a2 {"Apple"};


    return 0;
}