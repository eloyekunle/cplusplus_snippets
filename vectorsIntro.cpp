#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>
using namespace std;

void outputVector( const vector<int> & );
void inputVector( vector<int> & );

int main() {
    vector<int> integers1(7);
    vector<int> integers2(10);

    cout << "Size of Vector integers1 is: " << integers1.size() << "\nVector after initialization: " << endl;
    outputVector(integers1);

    cout << "Size of Vector integers2 is: " << integers1.size() << "\nVector after initialization: " << endl;
    outputVector(integers2);

    cout << "\nEnter 17 integers: " << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, vectors contain: \n" << "integers1: " << endl;
    outputVector(integers1);
    cout << "integers2: " << endl;
    outputVector(integers2);

    cout << "Evaluating: integers1 != integers2" << endl;
    if(integers1 != integers2) {
        cout << "integers1 is not equal to integers2" << endl;
    }

    vector<int> integers3(integers1);

    cout << "Size of Vector integers3 is: " << integers3.size() << "\nVector after initialization: " << endl;
    outputVector(integers3);

    cout << "\nAssigning integers2 to integers1: " << endl;
    integers1 = integers2;
    
    cout << "integers1: " << endl;
    outputVector(integers1);
    cout << "integers2: " << endl;
    outputVector(integers2);

    cout << "\nEvaluating integers1 = integers2" << endl;
    if(integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

    cout << "integers1[5] is: " << integers1[5] << endl;

    cout << "Assigning 1000 to integers1[5]:" << endl;
    integers1[5] = 1000;
    cout << "Vector integers1 now is: " << endl;
    outputVector(integers1);

    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integers1.at(15) << endl;
    } catch (out_of_range &ex) {
        cerr << "An error occured: " << ex.what() << endl;
    }

    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000);
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: " << endl;
    outputVector(integers3);
}

void outputVector(const vector<int> &array) {
    for(auto item : array) {
        cout << item << " ";
    }
    
    cout << endl;
}

void inputVector(vector<int> &array) {
    for(auto &item : array) {
        cin >> item;
    }
}
