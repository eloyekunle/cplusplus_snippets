#include <iostream>
#include <array>
using namespace std;

const size_t rows = 2;
const size_t columns = 3;
void printArray( const array<array<int, columns>, rows> &);

int main() {
    array< array< int, columns >, rows> array1 = {1,2,3,4,5,6};
    array< array< int, columns >, rows> array2 = {1,2,3,4,5};
    
    cout << "Values in array1 are:" << endl;
    printArray(array1);

    cout << "Values in array2 are:" << endl;
    printArray(array2);
}
    void printArray(const array<array<int, columns>, rows> & a) {
        for(auto const &row : a) {
            for(auto const &element : row) {
               cout << element << " ";
            }
            cout << endl;
        }
    }
