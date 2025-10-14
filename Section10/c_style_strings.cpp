#include <iostream>
#include <cstring>   // for c-style string functions
#include <cctype>   // for character -based functions


using namespace std;

using std::cin;
using std::cout;


int main() {


    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // strlen() returns size_t ... this is used because it will adapt to your cpu ...
    // so when you strlen(first_name) it will return how many bytes is sized, since its chars then it will just give you length of how many chars...

    // strcpy(full_name , first_name);   // copy first-name to full name



    return 0;
}