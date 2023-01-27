#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
    std::size_t sum = 0;
    bool isPrime[2000000];

    // set every byte to 1, because it is array of bool and bool is 1 byte, every elements of array will by 1, i.e., true
    std::memset(isPrime, true, sizeof(bool) * 2000000);
    // simple Sieve of Eratosthenes 
    for (std::size_t i = 2; i * i <= 2000000; ++i)     
        if (isPrime[i])
            for (std::size_t j = i * i; j <= 2000000; j += i)         
                isPrime[j] = false;

    for (std::size_t i = 2; i < 2000000; ++i)
        if (isPrime[i])
            sum += i;
        
    std::cout << sum << '\n';

    return 0;
}