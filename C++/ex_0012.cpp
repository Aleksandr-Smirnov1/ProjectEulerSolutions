#include <iostream>

int main(int argc, char* argv[]) {
    std::uint64_t triangle = 1;

    for (std::uint64_t cnt = 2; ; triangle += cnt, ++cnt)
        // If number is divisible by 210 that means it already has 2, 3, 5, 7 as divisors. 
        // The logical is simple: if a number has more prime factors => a number has more factors
        if (!(triangle % 210)) {
            std::uint64_t anw = 0;
            std::uint64_t i = 1;
                for (; i * i < triangle; ++i)
                    if ( !(triangle % i) ) // if divisible then we found two divisors
                        anw += 2;
                if (i * i == triangle) // i ^ 2 = triangle then we found one divisor
                    ++anw;

                if (anw > 500)
                    break;
        }
    std::cout << triangle << '\n';

    return 0;
}