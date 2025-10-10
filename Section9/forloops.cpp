#include <iostream>

using std::cout;
using std::cin;
using std::endl;




int main(){


    // using auto in the range based for loop:
            // instad of the value type inthe array you can say auto

    int array[]{10, 20, 30};

    for (auto obj: array) {
        cout << obj << endl;
    }

    // can initialize one array inside for loop ...
    for (auto val: {1, 2, 3, 4, 5, 6}) {
        cout << val << endl;
    }

    for (auto c: "This is a test ") {
        /*if (c != ' ')
            cout << c;
        */
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
    }
    return 0;
}