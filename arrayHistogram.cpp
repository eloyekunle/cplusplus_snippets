#include <iostream>
#include <array>
using namespace std;

int main() {
    const size_t arraySize = 11;
    array<unsigned int, arraySize> n = {0,0,0,0,0,0,1,2,4,2,1};

    for(size_t i = 0; i < n.size(); ++i) {
        if(i == 0) {
            cout << "  0-9: ";
        }
        else if(i == 10) {
            cout << "  100: ";
        }
        else {
            cout << i*10 << "-" << i*10+1 << ": ";
        }

        for(unsigned int stars = 0; stars < n[i]; ++stars) {
            cout << "*";
        }
        cout << endl;
    }
}
