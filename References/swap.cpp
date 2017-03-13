#include <iostream>

using namespace std;
void swap(int first, int second);
void swapRef(int &firstRef, int &secondRef);

int main() {
	int first = 5, second = 15;
	swap(first, second);
	cout << "first is now: " << first << "; and second is now: " << second << endl;
	swapRef(first, second);
	cout << "first is now: " << first << "; and second is now: " << second << endl;

	return 0;
}

void swap(int first, int second) {
	int temp = first;
	first = second;
	second = temp;
	cout << "in 'swap' function, first is: " << first << "; and second is: " << second << endl;
}

void swapRef(int &firstRef, int &secondRef) {
	int temp = firstRef;
	firstRef = secondRef;
	secondRef = temp;
	cout << "in 'swapRef' function, first is: " << firstRef << "; and second is: " << secondRef << endl;
}
