#include<iostream>
using namespace std;

int main() {
	//declare the two variables
	int n, m;
	//read them in from standard input
	cin >> n >> m;
	//calculate the difference
	int diff = n - m;

	if (diff < 0) {
		diff = diff*(-1);
	}

	cout << diff << endl;

	return 0;
}
