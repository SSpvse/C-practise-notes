#include <iostream>
#include <vector>

using namespace std;

using std::cin;
using std::cout;


int main() {

    std::vector<char> vowels1;
    std::vector<char> vowels (5);
    std::vector<int> test_scores (10, 3); // all 10 will be initialized with 3

    std::vector<char> vowelss{'a', 'e', 'i', 'o', 'u'};

    vowels.push_back('o'); // adds 5 to the end of the array (adds more index space to the end)
    cout << "letter: " << vowels.at(5);
    cout << "the size: " << vowels.size();

    vector<int> test_scores2{100, 98, 89};

    // 2D vectors:
    /*
    vector<vector<int>> movie_ratings
    {
        {1,2,3,4},
        {6,7,8,9},
        {10,11,12,13}
    };


    vector<vector<int>> movie_ratings{0};
    // movie_ratings.at(0).at(0) this is 1, (0)(1) is 2  (1)(1) is 7
    // the first is rows and then columns
    cout << "\nmovie size() : " << movie_ratings.size();
    cout << "\nmovie[0] size() : " << movie_ratings.at(0).size();
    for (int i = 0; i < movie_ratings.size(); i++) {
        for (int j = 0; j < movie_ratings.at(0).size(); ++j) {
            cout << "\nrow:" << i << " column:" << j
                 << " And the number in it is: " << movie_ratings.at(i).at(j);
        }
    }
*/
    vector<int> vector1{};
    vector<int> vector2{};
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "at 0, nr: "<< vector1.at(0) << "size: " << vector1.size() ;
    cout << "at 1, nr: " << vector1.at(1)<<   "size: " << vector1.size() ;


    vector2.push_back(100);
    vector2.push_back(200);

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    for (int r = 0; r < vector_2d.size(); ++r) {
        for (int c = 0; c < vector_2d.at(r).size(); ++c) {
            cout << "\nNumber at r/c: " << r << c << " and number: " << vector_2d.at(r).at(c);

        }

    }

    // vector_2d.at(0).at(0) = 1000;

    vector1.at(0) = 1000;

    cout << "\nThe vector1[0] nubmer is: " << vector1.at(0);


    for (int r = 0; r < vector_2d.size(); ++r) {
        for (int c = 0; c < vector_2d.at(r).size(); ++c) {
            cout << "\nNumber at r/c: " << r << c << " and number: " << vector_2d.at(r).at(c);

        }

    }
    return 0;
}