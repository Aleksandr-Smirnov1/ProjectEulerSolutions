#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    const std::size_t x = 10001;
    std::vector<std::size_t> primes;

    primes.reserve(x);
    primes.push_back(2);
    for (std::size_t i = 3; primes.size() <= x; i += 2) {
        bool isPrime = true;
        for (std::size_t p: primes) {
            if (!(i % p)) {
                isPrime = false;
                break;
            }

            if (p * p > i)
                break;
        }

        if (isPrime)
            primes.push_back(i);
    }
    std::cout << primes[x - 1] << '\n';

    return 0;
}