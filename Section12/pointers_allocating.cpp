#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {


    // allocating dynamically memory to pointers

    // allocate single element:
    int *int_ptr{nullptr};

    int_ptr = new int; // allocated on heap memory ( the int ) ;
    cout << int_ptr << endl; //  prints address of int variable on the heap;

    delete int_ptr;

    size_t size{0};
    double *temp_ptr{nullptr};
    cout << "how many temps?" ;
    cin >> size;
    temp_ptr = new double[size];  // double array of size "size"

    cout << temp_ptr << endl;
    delete []temp_ptr;

    return 0;

    // so ptr is allocated on stack, and double is on heap ;
    // if you loose connection between ptr and the double, memory leak on heap .. because the "new double" will be on heap without anything to connect to it..


}

