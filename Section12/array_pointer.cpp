#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {

    int scores[]{100, 95, 63};

    int *ptr_scores{scores};

    // subscript notation :: scores[index]  and  ptr_scores[index]
    // offset notation ::  *(scores + index)   and   *(ptr_scores + index)

    cout << "scores[index]:: " << scores[0] << " " << scores[1] << " " << scores[2] << endl;

    cout << "ptr_scores[index]:: " << ptr_scores[0] << " " << ptr_scores[1] << " " << ptr_scores[2] << endl;

    cout << "*(scores + index):: " << *scores << " " << *(scores + 1) << " " << *scores + 2  << " last one is 102 because scores[0] + 2 == 100+2, needs () arround scores+2 "<<endl;

    cout << "*(ptr_scores + index):: " << *ptr_scores << " " << *(ptr_scores + 1) << " " << *(ptr_scores + 2)  << endl;

  return 0;
}

