//
// Created by playmice on 4/25/17.
//

#include <iostream>

using namespace std;
struct ExtEuclid {
    int gcd;
    int bezout1;
    int bezout2;
};

ExtEuclid ExtendedEuclideanAlgorithm(int a, int b);
int RecursiveEuclideanAlgorithm(int a, int b);


int main() {
    int num1, num2;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;
    ExtEuclid gcd = ExtendedEuclideanAlgorithm(num1, num2);
    cout << "The gcd of " << num1 << " and " << num2 << " is: " << gcd.gcd << " with bezout coefficients: " << gcd.bezout1 << " and " << gcd.bezout2 << endl;
}

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
    ExtEuclid results = {x, sOldOld, tOldOld};
    return results;
}

int RecursiveEuclideanAlgorithm(int a, int b) {

}