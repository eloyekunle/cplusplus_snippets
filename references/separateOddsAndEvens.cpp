#include <iostream>
#include <vector>

using namespace std;

void separateOddsAndEvens(const vector<int>& arr, vector<int>& odds, vector<int>& evens);
void printVector(const vector<int>& vec);

int main() {
	vector<int> arrUnsplit = {1,2,3,4,5,6,7,8,9,10};
	vector<int> odds, evens;
	cout << "main array is: " << endl;
	printVector(arrUnsplit);
	separateOddsAndEvens(arrUnsplit, odds, evens);
	cout << "odds is: " << endl;
	printVector(odds);
	cout << "evens is: " << endl;
	printVector(evens);

	return 0;
}

void separateOddsAndEvens(const vector<int>& arr, vector<int>& odds, vector<int>& evens) {
	int numodds = 0, numevens = 0;
	for(auto& i : arr) {
		if(i % 2 == 1) {
			numodds++;
		} else {
			numevens++;
		}
	}

	odds.reserve(numodds);
	evens.reserve(numevens);
	for(auto& i : arr) {
		if(i % 2 == 1) {
			odds.push_back(i);
		} else {
			evens.push_back(i);
		}
	}
}

void printVector(const vector<int>& vec) {
	cout << "[";
	for(auto& i : vec) {
		cout << i << ", ";
	}
	cout << "]" << endl;
}
