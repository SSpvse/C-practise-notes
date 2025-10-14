
/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <string>
#include <iostream>

using namespace std;
/*
using std::cout;
using std::cin;
using std::endl;
using std::string;
*/
int main(){


    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr@"};

    string input;
    string encrypted_msg;
    string original_msg;

    cout << "Type in a message." << endl;
    getline(cin, input);

    for (auto c: input) {

        if (alphabet.find(c) == string::npos) {
            // Character not found in alphabet — leave it as is
            encrypted_msg += c;
        } else {
            // Character is in alphabet — encrypt it
            encrypted_msg += key[alphabet.find(c)];
        }

    }


    cout << "The encrypted: " << encrypted_msg << endl;

    for (auto c: encrypted_msg) {
        if (key.find(c) == string::npos) {
            original_msg += c;
        }else{
            original_msg += alphabet[key.find(c)];
        }
    }

    cout << "The original : " << original_msg << endl;
    return 0;
}