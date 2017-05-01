//
// Created by playmice on 4/26/17.
//

#include <iostream>
#include <cmath>

using namespace std;

void PrimeFactorization(int number);

int main() {
    int number;
    cout << "Enter a number to calculate prime factorization: " << endl;
    cin >> number;
    PrimeFactorization(number);
}

void PrimeFactorization(int number) {
    while (number % 2 == 0) {
        cout << 2 << endl;
        number = number / 2;
    }
    for (int i = 3; i <= sqrt(number); i = i + 2) {
        while (number % i == 0) {
            cout << i << endl;
            number = number / i;
        }
    }

    if (number > 2) {
        cout << number << endl;
    }
}
