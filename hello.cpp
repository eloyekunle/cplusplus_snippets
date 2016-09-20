#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++) {
        for (int hashNum = 1; hashNum <= 6 - row; hashNum++) {
            cout << "#";
        }
        cout << "\n";
    }
}
