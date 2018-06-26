#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

/* problem2: add all even fibonacci numbers < 4000000
*
*/

using namespace std; 

void print_fibs(std::vector<int> even_fibs);
template <typename Type>
std::vector<int> remove_duplicate(std::vector<int> fib_vec);
int fibonacci_number(int fib);
bool even_fibonacci_number(int current_fib);
int add_even_fibs(std::vector<int> even_fibs);

std::vector<int> even_fibs;


/* fibonacci_number: calculates the current fibonacci number
*/
int fibonacci_number(int fib) {
    if(fib <= 1 ) {
        return fib;
    }
    else {
        int current_fib = fibonacci_number(fib-1) + fibonacci_number(fib-2);
        if (even_fibonacci_number(current_fib)) {
            // add to vector 
            even_fibs.push_back(current_fib); 
        }
        return current_fib; 
    }
}


/* even_fibonacci_number: checks if the current calculated fibonacci number is even
*/
bool even_fibonacci_number(int current_fib) {
    bool fib_even_ok =  false;
    if (current_fib % 2 == 0) {
        fib_even_ok = true;
    }
    return fib_even_ok;
}


/* remove_duplicates: removes all duplicates in the vector
*/
template <typename Type>
std::vector<int> remove_duplicate(std::vector<Type> fib_vec) {
    std::sort(fib_vec.begin(), fib_vec.end());
    fib_vec.erase(unique(fib_vec.begin(), fib_vec.end()), fib_vec.end());
    return fib_vec;
}


/* add_even_fibs: adds all the even fibonacci numbers < 4000000
*/
int add_even_fibs(std::vector<int> even_fibs)  {
    int total  = 0; 
     for (std::vector<int>::iterator it = even_fibs.begin() ; it != even_fibs.end(); ++it) {
         total += *it; 
    }
    return total; 
}

/* eliminate_dup_fibs: returns an vector with non duplicated values
*/ 
void print_fibs(std::vector<int> even_fibs) {
    for (std::vector<int>::iterator it = even_fibs.begin() ; it != even_fibs.end(); ++it) {
         std::cout << ' ' << *it;
    }

}

int main() {

    int current_fib = fibonacci_number(33);  // thirty three before the numbers reach 4000000
    std::vector<int> fib_evens_non_dups = remove_duplicate(even_fibs); 
    int answer = add_even_fibs(fib_evens_non_dups);
    printf("%d", answer);
    return 0;

}