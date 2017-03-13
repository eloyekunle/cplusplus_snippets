#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1,6);

    const size_t arraySize = 7;
    array<unsigned int, arraySize> frequency = {};

    for(size_t i = 1; i <= 6000000; ++i) {
        ++frequency[randomInt(engine)];
    }

    cout << "Face" << setw(13) << "Frequency" << endl;

    for(size_t j = 1; j < frequency.size(); ++j) {
        cout << setw(4) << j << setw(13) << frequency[j] << endl;
    }
}
