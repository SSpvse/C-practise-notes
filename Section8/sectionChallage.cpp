#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/* 1 dollar is 100 cents
 * 1 quarter is 25 cents
 * 1 dime is 10 cents
 * 1 nickel is 5 cents
 * 1 penny is 1 cent.
 */

/* how to solve it
    i am trying to break down that number and see what coins i would use



*/
int main(){
    int sourceAmmount{0};

    cout << "Enter how many cents you are paying with: ";
    cin >> sourceAmmount;


    int dollar[]{0, 100 ,0},
        quarter[]{0,25,0},
        dime[]{0,10,0},
        nickel[]{0,5,0},
        pennie[]{0,1,0};

    int ammount = sourceAmmount;
    int ammount_mod = sourceAmmount;
    // index 0 is non modular counter
    // index 1 is for the ammount of the pennies in that value
    // index 2 is for the modular counter

    while (ammount_mod > 0) {

        cout << "\nStarting ammount : " << ammount_mod;
        int mod = ammount_mod % dollar[1];
        if (mod < ammount_mod) {
            cout << "\n Dollar = mod : " << mod << "ammount: " << ammount_mod;
            ammount_mod -= mod;
            dollar[2] = ammount_mod / dollar[1];
            ammount_mod -= dollar[2] * dollar[1];
            ammount_mod += mod;
        }else if (mod == 0) {
            dollar[2] = ammount_mod / dollar[1];
            break;
        }

        mod = ammount_mod % quarter[1];
        if (mod < ammount_mod) {
            cout << "\n Quarter = mod : " << mod << "ammount: " << ammount_mod;
            ammount_mod -= mod;
            quarter[2] = ammount_mod / quarter[1];
            ammount_mod -= quarter[2] * quarter[1];
            ammount_mod += mod;
        }else if (mod == 0) {
            quarter[2] = ammount_mod / quarter[1];
            break;
        }

        mod = ammount_mod % dime[1];
        if (mod < ammount_mod) {
            ammount_mod -= mod;
            dime[2] = ammount_mod / dime[1];
            ammount_mod -= dime[2] * dime[1];
            ammount_mod += mod;

        }else if (mod == 0) {
            dime[2] = ammount_mod / dime[1];
            break;
        }
        mod = ammount_mod % nickel[1];
        if (mod > ammount_mod) {
            ammount_mod -= mod;
            nickel[2] = ammount_mod / nickel[1];
            ammount_mod -= nickel[2] * nickel[1];
            ammount_mod += mod;
        } else if (mod == 0) {
            nickel[2] = ammount_mod / nickel[1];
            break;
        }
        mod = ammount_mod % pennie[1];
        if (mod > ammount_mod) {
            ammount_mod -= mod;
            pennie[2] = ammount_mod / pennie[1];
            ammount_mod -= pennie[2] * pennie[1];
            ammount_mod += mod;
        }else if (mod == 0) {
            pennie[2] = ammount_mod / pennie[1];
            break;
        }
    }

    cout << "\nThis is the change from modular algorithm:"
            "\ndollar: "<< dollar[2]
         <<"\nquarter: "<<quarter[2]
         <<"\ndime: "<< dime[2]
         <<"\nnickel: "<< nickel[2]
         <<"\npennie: "<< pennie[2];



    while (ammount > 0) {

        if (ammount >= dollar[1]) {
            cout << "\ndollar" << ammount;
            // int x = ammount % 100;
            ammount -= dollar[1];
            dollar[0]++;
            continue;
        } else if (ammount >= quarter[1]) {
            cout << "\nquarter" << ammount;
            ammount -= quarter[1];
            quarter[0]++;
            continue;
        }  else if (ammount >= dime[1]) {
            cout << "\ndime"  << ammount;
            ammount -= dime[1];
            dime[0]++;
            continue;
        } else if (ammount >= nickel[1]) {
            cout << "\nnickel" << ammount;
            ammount -= nickel[1];
            nickel[0]++;
            continue;
        } else if (ammount >= pennie[1]) {
            cout << "\npennie" << ammount;
            ammount -= pennie[1];
            pennie[0]++;
            continue;
        }
        break;
    }

        cout << "\nThis is the change from first algorithm:"
            "\ndollar: "<< dollar[0]
            <<"\nquarter: "<<quarter[0]
            <<"\ndime: "<< dime[0]
            <<"\nnickel: "<< nickel[0]
            <<"\npennie: "<< pennie[0];



    // How he did in the video:
    // he just did :
    // dollars = ammount / dollar_value;  this is lets say 267/100 gives you 2 .. because 2.something will just be 2 because its int
    // then balance = ammount % dollar_value
    // So first one will count how many dollars
    // and then the modular calculation will give you the ammount that you have left
    //

    return 0;
}