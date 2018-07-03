#include <string>
#include <iostream>
#include <sstream>

// answer == 233168

int main() {

    // initialize variables
    int mul_three = 3;
    int mul_five = 5;
    int threshhold = 999; // threshold below three thousand
    int total_sum = 0;

    for(int i = threshhold; i > 0; i-- ) {


        if((i % mul_five) == 0 || (i % mul_three) == 0) {
            total_sum += i;
        }
    }

    printf("%d\n", total_sum);

    return 0;

}