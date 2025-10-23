#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;

std::string reverse_string(const std::string &str);

int main() {


    string word{"Hello world!"};

    reverse_string(word);
    return 0;
}

string reverse_string(const std::string &str){
    string reversed{};

    //char *char_ptr{str.data()};
    const char *ptr = str.c_str();
    const char *cchar_ptr = str.data();

    cout << " *ptr: " << *ptr << endl;
    cout << "*ptr++:" << *(ptr + 1) << endl;

    for (auto c: str) {
        cout << c;

        reversed = c + reversed;
    }
    cout << "\n" << reversed << endl;
    return reversed;
}