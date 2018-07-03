#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <numeric>
#include <cmath>


using namespace std;

int square_of_sum(std::vector<int> &hundred_vec); 
int sum_squares(std::vector<int> &hundred_vec); 
int difference(int sum_square, int square_sum);
void print_elements(std::vector<int> &nums);
std::vector<int> hundred_range();

    
/* square_of_sum:  square after all numbers are summmed 
*/
int square_of_sum(std::vector<int> &hundred_vec) {
    int total = 0; 
    for (std::vector<int>::iterator it = hundred_vec.begin(); it != hundred_vec.end(); ++it) {
        total += *it;
    }
    int total_square = std::pow(total,2); 
    return total_square; 
}

/* sum_square: square each individual number and sum
*/
int sum_squares(std::vector<int> &hundred_vec) { 
    int total = 0; 
    for (std::vector<int>::iterator it = hundred_vec.begin(); it != hundred_vec.end(); ++it) {
        int squared = std::pow(*it,2);
        //cout << squared << endl ;
        total += squared;
    }
   //cout << total << endl ;

    return total; 
}

/* difference:  take the difference between the square_of_sum
*  and sum_squares 
*/
int difference(int sum_square, int square_sum) {
    return square_sum - sum_square;
}

/* hundred_range: creates a vector of 100 natural numbers from 0-100
*/
std::vector<int> hundred_range() { 
    // 100 needs to be inclusive
    std::vector<int> hundred(101);
    std::iota(hundred.begin(), hundred.end(),0); 
    return hundred;
}

/* print_elements:  prints all the elements in a vector
*/
void print_elements(std::vector<int> &nums) {
    for (std::vector<int>::iterator it = nums.begin() ; it != nums.end(); ++it) {
         std::cout << ' ' << *it;
    }
}



