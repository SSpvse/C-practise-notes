 #include <iostream>

// using namespace std;

using std::cin;
using std::cout;


int main(){


    int test_scores[5]{100, 95, 999, 87, 88};
    int high_scores_per_level[10]{3, 5};

    int days_in_year{365};
    int every_day_in_year[days_in_year];

    int another_array[]{1, 3, 5, 6, 7,}; // size automatically calculated

    // another section

    char vowels[]{'a', 'e', 'i', 'o', 'u'};


    int test_scores2[5]{}; // initializes all array with 0
                    // if the {} would be {90,5} then array would be 90 , 5 , 0, 0, 0

    return 0;
}