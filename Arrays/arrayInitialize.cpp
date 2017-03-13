#include <iostream>
#include <array>
#include <iomanip>
#include <cstddef>
using namespace std;

int main() {
    array< int, 5 > n;

    for(size_t i = 0; i < n.size(); ++i) {
        n[i] = 0;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for(size_t j = 0; j < n.size(); ++j) {
        cout << setw(13) << j  << setw(13) << n[j] << endl;
    }
}
