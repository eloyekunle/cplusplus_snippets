//
// Created by playmice on 4/25/17.
//

#include <iostream>

using namespace std;
int Euclidean(int a, int b);

int main() {
    int num1, num2;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;
    int gcd = Euclidean(num1, num2);

    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd << endl;
    return 0;
}

int Euclidean(int a, int b) {
    if(a == b) {
        return a;
    } else if(b == 0) {
        return a;
    }

    return Euclidean(b, a%b);
}