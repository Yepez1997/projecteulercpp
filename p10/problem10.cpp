#include "problem10.h"

bool is_prime(int number){ 
    // if odd return true else 
    if (number % 2 == 1){
        return true;
    } 
    else {
        return false; 
    } 
}

void check_all_numbers(int limit, std::deque<int> &prime_numbers){

    int end = 0; 
    limit = 2000;

    while(limit != end) { 
        if(is_prime(limit)) { 
            cout << limit  << endl;
            prime_numbers.push_back(limit); 
            limit -= 1; 
        }
        else { 
            // do not add to the deque 
            limit -= 1; 
        }

    }
}

int sum_primes(std::deque<int> &prime_numbers) {
    int total_sum = 0;
     for (std::deque<int>:: iterator it = prime_numbers.begin(); it !=prime_numbers.end(); ++it) {
        total_sum += *it;
    }
    return total_sum;
}


int main() {

    std::deque<int> prime_numbers; 

    int limit = 2000000; // total number of primes we want to check 
    check_all_numbers(limit, prime_numbers); 
    int total = sum_primes(prime_numbers); 

    cout << total << endl; 
    
    return 0;



}