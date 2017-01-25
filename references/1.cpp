#include <iostream>

using namespace std;

int main() {
	int x = 3;
	cout << "x is: " << x << "; &x is: " << &x << endl;
	int &xRef = x;
	cout << "xRef is: " << xRef << endl;
	int *hell = &xRef;
	cout << "hell is: " << hell << "; *hell is: " << *hell << "; &hell is: " << &hell << endl;
	xRef = 10;
	cout << "x is: " << x << "; xRef is: " << xRef << endl;
	cout << "&xRef is: " << &xRef << endl;

	const int &unnamedRef2 = 5;
	cout << "unnamedRef2 is: " << unnamedRef2 << endl;

	int *intP;
	cout << "intP is: " << intP << "; *intP is: " << *intP << endl;
	
	int *&ptrRef = intP;
	cout << "intP is: " << intP << "; *intP is: " << *intP << "; &intP is: " << &intP << "; ptrRef is: " << ptrRef << "; *ptrRef is: " << *ptrRef << "; &ptrRef is: " << &ptrRef << endl;
	
	ptrRef = new int;
	cout << "intP is: " << intP << "; *intP is: " << *intP << "; &intP is: " << &intP << "; ptrRef is: " << ptrRef << "; *ptrRef is: " << *ptrRef << "; &ptrRef is: " << &ptrRef << endl;
	
	*ptrRef = 5;
	cout << "intP is: " << intP << "; *intP is: " << *intP << "; &intP is: " << &intP << "; ptrRef is: " << ptrRef << "; *ptrRef is: " << *ptrRef << "; &ptrRef is: " << &ptrRef << endl;
}
