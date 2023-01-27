/**
* URL - https://projecteuler.net/problem=1
*/
#include <iostream>

// The sum of all numbers between 1 and n is sum{1..n} n = (n * (n + 1)) / 2
inline std::uint64_t sum(std::uint64_t n) {
    return n * (n + 1) / 2;
}

int main(int argc, char* argv[]) {
    std::uint64_t limit = 1000;
    --limit; // We need to find sum below that number by one;
    
    /**
     * There are floor(n / 3) numbers between 1 and n which are divisible by 3
     * e.g. in the range from 1 to 10 there are floor(10 / 3) = 3 numbers (it's 3, 6, and 9).
     * Their sum is 3 + 6 + 9 = 18. 
     * This can be written as: (3 + 6 + 9) = 3 * (1 + 2 + 3) = 3 * sum{1..3} = 3 * sum{1..floor(10 / 3)} = 3 * sum{1..(n / 10)};
     * because n is an integer number, in C++ for each n, x is an int, n / x = floor(n / x);
     * 
     * Let's pay attention, there are floor(n / 15) numbers between 1 and n which are divisible by 15,
     * which means they are part of both sums. We should not count numbers as 15, 30, 45, etc... twice in our sum.
     */

    std::uint64_t sum_of_three   = 3 * sum(limit / 3);
    std::uint64_t sum_of_five    = 5 * sum(limit / 5);
    std::uint64_t sum_of_fifteen = 15 * sum(limit / 15);

    std::cout << sum_of_three + sum_of_five - sum_of_fifteen << '\n';

    return 0;
}