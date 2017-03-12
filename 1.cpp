#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double number;
	cout << "Enter a number: ";
	cin >> number;
	cout << setprecision(3) << fixed;
	cout << right << setw(7) << number << endl;
}
