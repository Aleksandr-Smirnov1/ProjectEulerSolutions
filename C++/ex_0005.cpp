/**
* URL - https://projecteuler.net/problem=5
*/
#include <iostream>

// Euclidean algorithm:Greatest Common Divisor
std::int32_t gcd(std::int32_t a, std::int32_t b) {
    while (b) {
        std::int32_t tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

// Least Common Multiple
inline std::int32_t lcm(std::int32_t a, std::int32_t b) {
    return a * (b / gcd(a, b)); // Division first to avoid integer overflow
}

int main(int argc, char* argv[]) {
    std::int32_t ans = 1;
    const std::int32_t limit = 20;
    
    /**
    * We just have to find a Least Common Multiple (lcm) of 1, 2, ..., 20.
    * By definition lcm(1, 2, ..., 20) is divisible by all numbers through 1 to 20.
    * 
    * lcm(a, b) = | a * b | / gcd(a, b), where gcd is a Greatest Common Divisor
    * 
    * To find a a Greatest Common Divisor, use Euclidean algorithm:
    * gcd(a, b)
    *   while b != 0
    *       tmp <- b
    *       b   <- a % b
    *       a   <- b
    * return a
    * 
    * so, lcm(x_1, x_2, x_3, ..., x_n) = lcm(lcm(x_1, x_2, x_3, ..., x_{n-1}, x_n) = ... = lcm(lcm(lcm(...), x_{n - 1}), x_n)
    */

    for (std::int32_t i = 2; i <= limit; ++i)
        ans = lcm(ans, i);
    std::cout << ans << '\n';
    
    return 0;
}