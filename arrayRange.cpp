#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> items = {1,2,3,4,5};
    for(int item : items)
        cout << item << " ";
    cout << endl;
    for(int &itemRef : items)
        itemRef *= 2;
    for(int item : items)
        cout << item << " ";
    cout << endl;
}
