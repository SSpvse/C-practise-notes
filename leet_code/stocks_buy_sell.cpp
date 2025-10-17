#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

using std::cin;
using std::cout;


int main() {

    vector <int> prices{4,6,6,2,35,67,2,35,7,373,2,6};

    if (prices.size() < 1) {
        return 0;
    }
    int l=0, r = 1;
    int max_profit = 0;
    int profit;
    while(r < prices.size()) {
        cout << "l and r " << prices[l] << " " << prices[r] << endl;

       if (prices[l] < prices[r]){
           profit = prices[r] - prices[l];
           cout << " profti / max profit: " << profit << "  " << max_profit << endl;
           max_profit = max(profit, max_profit);
           r++;
       }else{
           l = r;
           r++;
       }
    }
    cout << "maxprof: " << max_profit << endl;
    return max_profit;
   return 0;

/*
    int max_dif {0};
    int buy_index, sell_index;
    int buy, low;
    int sell, max;
    if (prices.empty()) {
        cout << "No good array" << endl;
        return 0;
    }
    // i=0 is and j finds the biggest nr he can ... when he does that, then I takes over and finds the smallest nr between them, when it does find
     // when j finds the biggest after the first try.. i moves to that and tries to find lowest , when does it starts J from I
     int maxIndex;
    int i = 0;
    int bignr =0;
    int j = 1;
    while( (i < prices.size()-1) ){   // 0 < 20. 10

        for ( ; j < prices.size() ; ++j) {


            if( (prices[j] - prices[i]) > max_dif){ //
                max_dif = prices[j] - prices[i];
                low = prices[i];
                max = prices[j];
                maxIndex = j;
            }
            int temp_low_index;
            for (int k = i; k < j; ++k) {

                if (prices[i]>prices[k]) {
                    temp_low_index= prices[k];
                }
            }
            i = temp_low_index;
            j = maxIndex;

        }

        i++;
    }
    buy_index = i;
    sell_index = max;
    return max_dif;
*/
    /*
     for (int i = 0; i <prices.size()-1; ++i) {

         if (i > 0 && prices[i] > prices.at(i - 1)) {
             continue;
         }
         for (int j = i+1 ; j < prices.size(); ++j) {

             if (j > 0 && prices.at(j) < prices.at(j - 1)) {
                 continue;
             }

             if (max_dif < (prices.at(j) - prices.at(i))) {
                 max_dif = prices.at(j) - prices.at(i);
                 buy_index = i;
                 sell_index = j;
             }
         }
     }
   */
    //cout << "Buy at: " << prices.at(buy_index) << " sell: " << prices.at(sell_index) <<
    //             " earn: " << max_dif << endl;

}

