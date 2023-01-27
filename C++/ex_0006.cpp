/**
* URL - https://projecteuler.net/problem=6
*/
#include <iostream>

int main(int argc, char* argv[]) {
    const std::int32_t n = 100;

    // The sum of all numbers between 1 and n is sum{1..n} n = (n * (n + 1)) / 2
    std::int32_t sum_x = (n * (n + 1)) / 2; 
    // The sum of all square of numbers between 1 and n is sum{1..n^2} n = (n * (n + 1) * (2n + 1)) / 6
    std::int32_t sum_x_times_two = (n * (n + 1) * (2 * n + 1)) / 6; 

    std::cout << sum_x * sum_x - sum_x_times_two << '\n';
    
    return 0;
}