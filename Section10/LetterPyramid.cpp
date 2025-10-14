#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {


    cout << "Enter a string for the pyramid" << endl;
    string input;
    cin >> input;


    int full_width = static_cast<int> (input.size() );
    cout << "Full width of half + center : " << full_width << endl;

    int position = 0 ;  // first letter

    for (int p = 0; p < full_width; ++p) {

        for (int i = 0; i < (full_width - position); ++i) {
            cout << "_";
        }
        for (int c = 0; c <= position; ++c) {
            cout << input.at(c);
        }
        if (position > 0){
            for (int b = position-1; b >= 0; --b) {
                cout << input.at(b);
            }
        }
        for (int i = 0; i < (full_width - position); ++i) {
            cout << "_";
        }
        position++;
        cout << "\n";
    }




// my first method bellow...VVV  and the above is insipred by the answer on the website AAAAAAA



    /*

      cout << "info:: length :  " << input.size() << endl;

      // calc is to figure out how many spaces i need at the first half of the first row, then use same nr for 2nd half of spaces
      cout << "info:: calc :  " <<  (   (( (input.size()*2 )-1) -1) / 2) << endl;





      // j is for each lvl of pyramid,
      // y is getting bigger by 1 because the spaces are lowering by 1 , so we use it in the z <  part of for loop.
      for (int j = 1, y=0 ; j <= input.size(); j++, y++) {

          // this is size of input times 2 then we remove 1 because the last letter is used 1 time only
              // then we remove 1 more because there is 1 letter at the top of the pyramid, then we devide by 2
                  // because we want only the first half of spaces
          for ( int z =0 ; z < ((( (input.size()*2 )-1) -1) / 2) - y; ++z) {
              cout << " ";
          }

          int iCount;
          // for first half of letters
          for (unsigned i = 0; i < j ; ++i) {
              cout << input.at(i);
              iCount = (int)i;
          }

          // for second half of letters, iCount is to transfer the i into the x variable , iCount -1 is so we dont use the last letter of the i iteration loop
          if(iCount > 0){
              for (int x = iCount-1 ; x >= 0 ; x--) {
                  cout << input.at(x);
              }
          }

          // second space part
          for(int z =0 ; z < ((( (input.size()*2 )-1) -1) / 2) - y; ++z){
              cout << " ";
          }
          // end the J loop with next line for next line of pyramid part
          cout << "\n";
      }



      */
    return 0;
}