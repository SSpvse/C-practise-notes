#include <iostream>
#include <climits>





int main(){

    std::cout << "Hello world! ";

    char middle_initial{'J'};

    unsigned short int exam_score{55};

    int countries_represented{65};

    long people_in_florida{20510000};

    long people_on_eart {7'600'000'000};
    long people_on_earth= 7600000000;

    float car_payment{401.23};

    double pi{3.14159};

    std::cout << "there are " << people_on_earth << " people on earth " << std::endl;


    std::cout << "size of double : " << sizeof (pi) << "size of long: " << sizeof people_on_earth<< "size of int: "<< sizeof countries_represented ;

    // Constants ::
    //litteral constant

    // declared constants:  const int months{12};


    return 0;
}