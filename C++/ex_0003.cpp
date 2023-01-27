/**
* URL - https://projecteuler.net/problem=3
*/
#include <iostream>

int main(int argc, char* argv[]) {
    std::int64_t N = 600851475143;

    /**
    * We start our loop from 2 (as smallest prime)
    * Number N can be represented as N = i * (N / i), where (N / i is an integer)
    * If N / i is a composite number, loop will be continuing until N / i is a largest prime number.
    * Loop will be running until factor <= sqrt(N), because then only a prime is left.
    */

    for (std::int32_t factor = 2; factor * factor <= N; ++factor)
        while (!(N % factor))
            N /= factor;
            
    std::cout << N << '\n';

    return 0;
}