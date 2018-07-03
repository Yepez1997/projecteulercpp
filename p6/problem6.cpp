#include "problem6.h"

int main () { 
    
    std::vector<int> h_list =  hundred_range();
    
    int square_sum =  square_of_sum(h_list);

    int sum_square = sum_squares(h_list);

    int final_sum = difference(sum_square, square_sum);

    cout << final_sum << endl ;

    return final_sum;
}