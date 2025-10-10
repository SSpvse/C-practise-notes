#include <iostream>

// using namespace std;

using std::cin;
using std::cout;

double calculate_room_total(double room_price, int quantity_rooms);
double calc_tax(double total, double tax);

int main(){

    double price_small{25};
    double price_big{35};
    double tax{0.06};

    double total;
    double tax_result;

    int small_rooms;
    cout << "How many small rooms would you like cleaned ?";
    cin >> small_rooms;

    int big_rooms;
    cout << "\nHow many big rooms would you like cleaned? ";
    cin >> big_rooms;

    cout << "\nPrice per small room: $" << small_rooms;
    cout << "\nPrice per big room: $" << big_rooms;

    total = calculate_room_total(price_big, big_rooms) +
            calculate_room_total(price_small, small_rooms);

    tax_result = calc_tax(total, tax);

    cout << "\nCost: $" << total << "\nTax: $" << tax_result
         << "\n================================================= ";
    cout << "\nTotal estimate: $" <<  total + tax_result;
    cout << "\n estimated valid for 30 days";


    std::string name;
    return 0;
}

double calculate_room_total(double room_price, int quantity_rooms){

    return room_price * quantity_rooms;
};

double calc_tax(double total, double tax){

    return total * tax;
}