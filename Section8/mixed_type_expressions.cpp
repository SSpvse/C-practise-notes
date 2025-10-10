#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){


    int total {};
    int num1{}, num2{}, num3{};

    const int count {3};

    double average{0.0};

    average = static_cast<double>(total) / count;
    //can cast like old style, (double) total / count but it doesnet have these checks like the static_cast does to see if the number CAN be converted.


    // another section , testing for equality
    bool equal_ruslt{false};
    bool not_equal_result{false};

    cout << std::boolalpha; // this makes the printout say true or false and not 1 or 0 as booleans

    double num11{10}, num22{9.999999999999999999999};
    equal_ruslt = (num1 == num2);
    not_equal_result = (num11 != num22);

    cout << "numbers: " << num11 << num22;

    if (num11 == num22) {
        cout << "HIIII";
    }
    return 0;
}