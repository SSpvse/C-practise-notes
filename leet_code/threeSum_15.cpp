#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {
    vector<int> nums{1, -1, -1, 0};
    //vector<int> nums {-1,0,1,2,-1,-4};
    //vector<int> nums {0,0,0};

    sort(nums.begin(), nums.end());


    vector<vector<int>> nums2D{};

    //sort(cNums.begin(), cNums.end());

/*
    if (nums.size() <4){
        int sum{};
        for (int nr : nums) {
            cout << "nums nr: " << nr;
            sum += nr;
        }
        cout << endl;
        if(sum == 0){
            nums2D.push_back(nums);
        }
    }
    */
/*
    cout << "35. BEFORE loop cNums : ";
    for (auto x : cNums) {
        cout << x << endl;
    }


*/

/*
    for (int i = 0; i < nums.size() - 2; ++i) {
        int sum1 = nums[i] + nums[nums.size()-1];
        if (sum1+nums[i+1] < 0){
            continue;
        }
        cout << "46. in 1st loop nr: " << nums.at(i) << endl;

        for (int j = (int)nums.size() - 1 ; j > i + 1; --j) {

            cout << "52. in 2nd loop nr: " << nums.at(j) << endl;
            int sum = nums.at(i) + nums.at(j);
            cout << "54. in 2nd loop i nr and j nr : " << nums.at(i) << " " << nums.at(j) << endl;

            for (int k = i+1 ; k < j; ++k) {
                if ((sum + nums.at(k)) == 0 ){
                    cout << "58. in 3rd loop nr: " << nums.at(k) << endl;
                    vector<int> temp {nums.at(i), nums.at(j), nums.at(k)};
                    nums2D.push_back(temp);
                }
            }
            
        }
    }

 */

/*
    for (int i = 0; i < nums.size() - 2; ++i) {

        cout << "46. in 1st loop nr: " << nums.at(i) << endl;

        for (int j=(int)nums.size()-1, k = i+1 ; j>i+1 , k<j ; k++) {


            cout << "80. in 2nd loop i nr: " << nums.at(i) << endl;
            cout << "81. in 2nd loop k nr: " << nums.at(k) << endl;
            cout << "82. in 2nd loop j nr: " << nums.at(j) << endl;

            int sum = (nums.at(i) + nums.at(j) +nums.at(k) );
            if (sum == 0){

                cout << "90. in 2nd loop i nr: " << nums.at(i) << endl;
                cout << "91. in 2nd loop k nr: " << nums.at(k) << endl;
                cout << "92. in 2nd loop j nr: " << nums.at(j) << endl;
                vector<int> temp {nums.at(i), nums.at(j), nums.at(k)};
                nums2D.push_back(temp);
            }else if(sum > 0){
                cout << "inside else if j: "<< nums.at(j) << endl;
                j--;
                while (nums.at(j) == nums.at(j - 1)) {
                    cout << "inside else if while : "<< endl;
                    j--;
                }
                cout << "inside after done else if j: "<< nums.at(j) << endl;
            }

        }
    }

 */
    for (int i = 0; i < nums.size() - 2; ++i) {
        cout << "Starts again forlopp 1, iteration: i" << i << endl;

        int k = i + 1;
        int j = (int) nums.size() - 1;

        while (k < j) {
            cout << "80. in 2nd loop i nr: " << nums.at(i) << endl;
            cout << "81. in 2nd loop k nr: " << nums.at(k) << endl;
            cout << "82. in 2nd loop j nr: " << nums.at(j) << endl;
            int sum = (nums.at(i) + nums.at(j) + nums.at(k));

            if (sum > 0) {
                cout << " INSDE  ! J: " << nums.at(j) << endl;
                j--;
                if (nums.at(j) == nums.at(j + 1)) {
                    j--;
                }
            } else if (sum < 0) {
                k++;
                if (nums.at(k) == nums.at(k - 1)) {
                    k++;
                }
            } else {

                cout << "90. in 2nd loop i nr: " << nums.at(i) << endl;
                cout << "91. in 2nd loop k nr: " << nums.at(k) << endl;
                cout << "92. in 2nd loop j nr: " << nums.at(j) << endl;
                vector<int> temp{nums.at(i), nums.at(j), nums.at(k)};
                cout << "PUSHED! i k j : " << nums.at(i) << nums.at(k) << nums.at(j) << endl;
                nums2D.push_back(temp);
                k++;

            }

        }


        if (nums2D.empty()) {
            cout << "[]" << endl;
        }
/*
    vector<int> toDel;

    for (int i = 0; i < nums2D.size()-1; ++i) {
        for (int j = (int)nums2D.size()-1 ; j > i; --j) {
            if ( (*min_element(nums2D[i].begin(), nums2D[i].end()) == *min_element(nums2D[j].begin(), nums2D[j].end())) &&
                        (*max_element(nums2D[i].begin(), nums2D[i].end()) == *max_element(nums2D[j].begin(), nums2D[j].end()))
            ){
                toDel.push_back(i);
            }
        }
    }

*/

        /*for (int r = 0; r < nums2D.size()-1; ++r) {
            int min = *min_element(nums2D[r].begin(), nums2D[r].end());
            int max = *max_element(nums2D[r].begin(), nums2D[r].end());
            cout << "Forloop: min max: " << min << " " << max << endl;
            //cout << "Forloop: min max: " << *min_element(nums2D[r+1].begin(), nums2D[r+1].end()) << " " << *max_element(nums2D[r+1].begin(), nums2D[r+1].end()) << endl;

            if (( nums2D.size()-1) == (r+1)){
                if (min == *min_element(nums2D[r+1].begin(), nums2D[r+1].end()) &&
                    max == *max_element(nums2D[r+1].begin(), nums2D[r+1].end())) {
                    toDel.push_back(r);
                }
            }
        }
    */

/*
    for (int x: toDel) {
        cout << "destroyed:: " << x << endl;
        // std::destroy(nums2D[x].begin(), nums2D[x].end());
        nums2D.erase(nums2D.begin() +x );
    }
*/



        cout << "[";
        for (const auto &r: nums2D) {
            cout << "[";

            for (int i = 0; i < 3; ++i) {
                if (i < 2) {
                    cout << r[i] << ",";
                } else {
                    cout << r[i];
                }
            }
            cout << "]";
        }
        cout << "]";


        return 0;
    }

}