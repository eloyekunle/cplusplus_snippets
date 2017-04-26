//
// Created by playmice on 4/26/17.
//

#include <iostream>
#include <cmath>

using namespace std;
bool trialDivision(int number);

int main() {
    int num;
    cout << "Enter the number you want to test: " << endl;
    cin >> num;
    bool primality = trialDivision(num);
    cout << primality;
}

bool trialDivision(int number) {
    if (number == 1) {
        return 0;
    }
    int squareRoot = (int) sqrt(number);
    for(int i = 2; i <= squareRoot; i++) {
        if (number%i == 0) {
            return false;
        }
    }

    return true;
}