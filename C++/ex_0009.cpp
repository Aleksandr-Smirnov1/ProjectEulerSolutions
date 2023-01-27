#include <iostream>

int main(int argc, char* argv[]) {
    for (std::int64_t a = 1; a < 1000 / 3; ++a) {
        std::int64_t b = (1000 * (500 - a)) / (1000 - a);
        std::int64_t c = 1000 - a - b;
        if (a < b)
            if (a * a + b * b == c * c) {
                std::cout << a * b * c << '\n';
                break;
            }
    }

    return 0;
}