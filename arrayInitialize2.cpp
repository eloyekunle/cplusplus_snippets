#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    array<int, 5> n = {56, 77, 88, 23, 45};
    cout << "Element" << setw(18) << "Value" << endl;
    for(size_t i = 0; i < n.size(); ++i) {
        cout << i << setw(13) << n[i] << endl;
    }
}
