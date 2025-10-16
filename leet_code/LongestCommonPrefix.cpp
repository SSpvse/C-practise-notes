#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;


int main() {

   // vector<string> strs{"flower","flow","flight"};
    //vector<string> strs{"hello" , "helmet" , "helicopter"};
    vector<string> strs{"flower","flower","flower","flower"};
    string end_prefix;

    if(strs.size() < 2){
        cout << "return : " << strs[0] << endl;
    }
    string shortest_string = strs[0];
    for(auto word : strs){
        if(shortest_string.size() > word.size()){
            shortest_string = word;
        }
    }

// hello , helmet, helicopter


    int total_words = (int)strs.size();

    bool breakloop{false};

    cout << "beofre 1st loop, totalwords " << total_words << endl;
    cout << "shortest String " << shortest_string << endl;
    for(int i = 0; i<=shortest_string.size() ; i++){
        int wordcount{0};
        string prefix;

        if(shortest_string.size() == 1){
            prefix = shortest_string;
        }else{
            prefix = shortest_string.substr(0, i);
        }

        cout << "inside 1st loop, wordcount: " << wordcount << " prefix: " << prefix << endl;

        for(auto word : strs){
            cout << "inside 2nd loop|| prefix: " << prefix << endl;

            if (word.compare(0, prefix.size(), prefix) == 0) {
                cout << "word: "<< word << " matches with: "<< prefix  << endl;
                wordcount++;
            }else{
                cout << "word: "<< word << " DOES NOT MATCH with: "<< prefix  << endl;
                breakloop =true;
                break;
            }
        }
        if(breakloop)
            break;  // break outer loop

        if(total_words == wordcount){
            end_prefix = prefix;
        }

    }
    if(end_prefix.empty()){
        cout << "NO matches, return "" " << endl;
    }
    cout << "this is the prefix end: " << end_prefix ;
    return 0;
}


/*
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++)
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        return prefix;
    }
};

 */

/* vertical scanning:
 *
 * class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (i == strs[j].size() || strs[j][i] != c)
                    return strs[0].substr(0, i);
            }
        }
        return strs[0];
    }
};
 */

/*. devide & conqor
 *
 * class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        return longestCommonPrefix(strs, 0, strs.size() - 1);
    }

private:
    string longestCommonPrefix(vector<string>& strs, int l, int r) {
        if (l == r) {
            return strs[l];
        } else {
            int mid = (l + r) / 2;
            string lcpLeft = longestCommonPrefix(strs, l, mid);
            string lcpRight = longestCommonPrefix(strs, mid + 1, r);
            return commonPrefix(lcpLeft, lcpRight);
        }
    }

    string commonPrefix(string left, string right) {
        int min = std::min(left.length(), right.length());
        for (int i = 0; i < min; i++) {
            if (left[i] != right[i]) return left.substr(0, i);
        }
        return left.substr(0, min);
    }
};
 */

/* binary serach :
 *
 * class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int minLen = INT_MAX;
        for (string str : strs) minLen = min(minLen, (int)str.length());
        int low = 1;
        int high = minLen;
        while (low <= high) {
            int middle = (low + high) / 2;
            if (isCommonPrefix(strs, middle))
                low = middle + 1;
            else
                high = middle - 1;
        }
        return strs[0].substr(0, (low + high) / 2);
    }

private:
    bool isCommonPrefix(vector<string>& strs, int len) {
        string str1 = strs[0].substr(0, len);
        for (int i = 1; i < strs.size(); i++)
            if (strs[i].find(str1) != 0) return false;
        return true;
    }
};
 */