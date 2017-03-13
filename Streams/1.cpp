#include <iostream>

using namespace std;

int main() {
	bool myBool = true;
	cout << "This should be true: " << boolalpha << myBool << endl;
	cout << "This should be 1: " << noboolalpha << myBool << endl;
}
