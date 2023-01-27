/**
* URL - https://projecteuler.net/problem=4
*/
#include <iostream>

// Function that creates a palindrome by mirroring a number
std::int32_t opposite(int32_t num) {
    std::int32_t ans = 0;

    while (num > 0) {
        ans = ans * 10 + num % 10;
        num /= 10;
    }

    return ans;
}

int main(int argc, char* argv[]) {
    std::int32_t largest_palindrome = 0;
    
    /**
    * Note that the number is probably 6 digits, i.e. abccba = p * q, where a, b, c is digit.
    * we can rewrite it as:
    * 100000a + 10000b + 1000c + 100c + 10b + a = p * q
    * 100001a + 10010b + 1100c = p * q
    * which can be factored to:
    * 11 * (9091a + 910b + 100c) = p * q
    * => p * q must be divisible by 11
    * 
    * Since p * q is divisible by 11, we start with 990 as the largest possible number in the given range that is also divisible by 11. 
    */

    for (std::int32_t i = 990; i > 99; i -= 11)
        for (std::int32_t j = 999; j > 99; --j) {
            std::int32_t tmp = i * j;
            if (tmp > largest_palindrome && tmp == opposite(tmp)) {
                largest_palindrome = tmp;
                break;
            } else if (largest_palindrome > tmp)
                break;
        }
    std::cout << largest_palindrome << '\n';

    return 0;
}