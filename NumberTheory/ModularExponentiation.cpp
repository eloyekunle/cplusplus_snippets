//
// Created by playmice on 5/1/17.
// Algorithm to calculate Modular Exponentiation
//

#include <iostream>

int modularexponentiation(int base, int exponent, int mod);

int main() {
    int base, exponent, mod;
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
    std::cout << "Enter the modular: ";
    std::cin >> mod;

    int exponentiation = modularexponentiation(base, exponent, mod);
    std::cout << exponentiation;
}

int modularexponentiation(int base, int exponent, int mod) {
    int x = 1;
    int power = base % mod;

    while (exponent > 0) {
        // if exponent is odd,
        if (exponent & 1) {
            x = (x*power) % mod;
        }

        exponent = exponent >> 1;
        power = (power * power) % mod;
    }

    return x;
}