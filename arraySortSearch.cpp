#include <iostream>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

int main() {
    const size_t arraySize = 10;
    array<string, arraySize> colors = {"orange", "blue", "black", "green", "indigo", "red", "yellow", "violet", "purple", "pink"};

    cout << "Unsorted array:\n";
    for(string color : colors) {
        cout << color << " ";
    }

    sort(colors.begin(), colors.end());

    cout << "\nSorted array:\n";
    for(string item : colors) {
        cout << item << " ";
    }

    bool found = binary_search(colors.begin(), colors.end(), "indigo");
    cout << "\nIndigo " << (found ? "was " : "was not ") << "found in colors" << endl;
    found = binary_search(colors.begin(), colors.end(), "cyan");
    cout << "Cyan " << (found ? "was " : "was not ") << "found in colors" << endl;
}
