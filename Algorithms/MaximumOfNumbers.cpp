#include <iostream>
#include <vector>

using namespace std;

int max(const vector<int> &arr);
void inputVector(vector<int> &arr);

int main() {
	vector<int> numbers;
	int maxNum;

	inputVector(numbers);
	cout << "Finding maximum..." << endl;

	maxNum = max(numbers);

	cout << "Maximum number is: "<< maxNum << endl;

	return 0;
}

int max(const vector<int> &arr) {
	int maxNumber;
	maxNumber = arr[0];
	for(auto &item : arr) {
		if (item > maxNumber) {
			maxNumber = item;
		}
	}

	return maxNumber;
}

void inputVector(vector<int> &arr) {
	int numOfItems, item;
	cout << "How many numbers you got?" << endl;
	cin >> numOfItems;
	cout << "Enter the numbers separated by space" << endl;
	for(int i = 0; i < numOfItems; i++) {
		cin >> item;
		arr.push_back(item);
	}
}
