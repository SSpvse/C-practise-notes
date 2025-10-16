#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {
    //vector<int> nums{1, -1, -1, 0};
    //vector<int> nums {-1,0,1,2,-1,-4};
    vector<int> nums {0,0,0};

    sort(nums.begin(), nums.end());


    vector<vector<int>> nums2D{};

    //sort(cNums.begin(), cNums.end());

    for (int i = 0; i < nums.size() - 2; ++i) {
        cout << "Starts again forlopp 1, iteration: i" << i << endl;
        if (i>0 && nums.at(i) == nums.at(i-1)) {
            continue;
        }
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

                vector<int> temp{nums.at(i), nums.at(j), nums.at(k)};
                nums2D.push_back(temp);
                k++;
                while (nums[k] == nums[k - 1] && k < j) {
                    k++;
                }
                break;

            }

        }

    }
        if (nums2D.empty()) {
            cout << "empty []" << endl;
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

