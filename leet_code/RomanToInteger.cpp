#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {

    cout << "input string of roman numbers M(1000), D(500), c(100), L(50), X(10), V(5) , I(1)" << endl;
    string s;
    cin >> s;

    cout << "input.size(): " << s.size() << endl;
    int sum{};

    for (int i = 0; i < s.size(); ++i) {

        switch (s.at(i)) {
            case 'M':
                if(i <= (s.size() - 1) ){
                    sum += 1000;
                }
                break;
            case 'D':
                if(i <= (s.size() - 1) ){
                    sum += 500;
                }
                break;
            case 'C':
                if(i == (s.size() - 1) ){
                    sum += 100;
                }else if(s.at(i + 1) == 'D' || s.at(i + 1) == 'M'){
                    sum -= 100;
                }else{
                    sum += 100;
                }
                break;
            case 'L':
                if(i <= (s.size() - 1) ){
                    sum += 50;
                }
                break;
            case 'X':
                if(i == (s.size() - 1) ){
                    sum += 10;
                }else if(s.at(i + 1) == 'L' || s.at(i + 1) == 'C'){
                    sum -= 10;
                }else{
                    sum += 10;
                }
                break;
            case 'V':
                if(i <= (s.size() - 1) ){
                    sum += 5;
                }
                break;
            case 'I':
                if(i == (s.size() - 1) ){
                    sum += 1;
                }else if(s.at(i + 1) == 'V' || s.at(i + 1) == 'X'){
                    sum -= 1;
                }else{
                    sum += 1;
                }
                break;
        }

    }

    cout << "The result :  " << sum << endl;


    return 0;
}


/*
 *
 * from leetcode:
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.



Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.


Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].
*/