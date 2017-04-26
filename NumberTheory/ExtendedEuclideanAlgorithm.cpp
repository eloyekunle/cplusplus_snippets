//
// Created by playmice on 4/25/17.
//

#include <iostream>

using namespace std;
// Struct to hold three variables returned by naiive extendedeuclidean
struct ExtEuclid {
    int gcd;
    int bezout1;
    int bezout2;
};

ExtEuclid ExtendedEuclideanAlgorithm(int a, int b);
// Calculates the gcd of the numbers and also the bezout coefficients of the numbers.
int RecursiveEuclideanAlgorithm(int a, int b, int *s, int *t);


int main() {
    int num1, num2;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;

    ExtEuclid gcd = ExtendedEuclideanAlgorithm(num1, num2);
    cout << "The gcd of " << num1 << " and " << num2 << " is: " << gcd.gcd << " with bezout coefficients: " << gcd.bezout1 << " and " << gcd.bezout2 << endl;

    cout << "Using extended euclidean algorithm" << endl;
    int s, t;
    int gcd2 = RecursiveEuclideanAlgorithm(num1, num2, &s, &t);
    cout << "The gcd of " << num1 << " and " << num2 << " is: " << gcd2 << " with bezout coefficients: " << t << " and " << s << endl;
}

// Naiive form of the extended euclidean algorithm.
ExtEuclid ExtendedEuclideanAlgorithm(int a, int b) {
    int x = a;
    int y = b;
    int sOld = 0;
    int sOldOld = 1;
    int tOld = 1;
    int tOldOld = 0;
    while (y != 0) {
        int quotient = x/y;
        int remainder = x%y;
        x = y;
        y = remainder;
        int sNew = sOldOld - quotient * sOld;
        int tNew = tOldOld - quotient * tOld;
        sOldOld = sOld;
        tOldOld = tOld;
        sOld = sNew;
        tOld = tNew;
    }
    ExtEuclid results = {x, sOldOld, tOldOld};      // Returning gcd and bezout coefficients in struct.
    return results;
}

// Recursive form of the extended euclidean algorithm.
int RecursiveEuclideanAlgorithm(int a, int b, int *s, int *t) {
    // Base case.
    if (b == 0) {
        *s = 0;
        *t = 1;
        return a;
    }

    int s1, t1 = 0;
    int gcd = RecursiveEuclideanAlgorithm(b, a%b, &s1, &t1);    // Recursive step

    int quotient = a/b;
    *s = t1 - quotient * s1;
    *t = s1;

    return gcd;
}