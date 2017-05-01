//
// Created by playmice on 4/26/17.
//

#include <iostream>
#include <string>

using namespace std;

void calculateModulus() {
    int a, b;
    cout << "Enter numbers a and b to calculate modulus: (a mod b): ";
    cin >> a >> b;
    cout << a << " mod " << b << " = " << a%b << endl;
}

int main() {
	string another;
	do {
		calculateModulus();
	} while (another != "y");
}
