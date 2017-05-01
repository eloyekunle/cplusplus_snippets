//
// Created by playmice on 5/1/17.
// Pretty cool stuff, does hexadecimal conversions too.
//

#include <iostream>

std::string basenexpansion(int n, int b);

int main() {
    int number, base;
    std::cout << "Enter the number you want to expand and the base (space separated): ";
    std::cin >> number >> base;

    std::string expansion = basenexpansion(number, base);
    std::cout << "Expansion is: " << expansion;
}

std::string basenexpansion(int n, int b) {
    std::string newbase;
    while(n != 0) {
        int rem = n%b;
        std::string answer;
        if (rem < 10) {
            answer = '0' + rem;             // Need to add 0 so as to convert rem to str.
        } else {
            answer = rem - 10 + 'A';
        }
        newbase = answer + newbase;         // Append answer to front of newbase since remainders are added from reverse.
        n /= b;                             // Reduce n
    }
    return newbase;
}