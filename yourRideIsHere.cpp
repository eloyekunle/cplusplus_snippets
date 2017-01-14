/*
 * USER: elijah1
 * TASK: ride
 * LANG: C++
*/

#include <fstream>
using namespace std;

ifstream fin("ride.in");
ifstream fout("ride.out");

int score(string hello) {
	int a = 1
	for (int i = 0; i < hello.length(); i++) {
		//cout << hello[i] - 'A' + 1 << "\n";
		a *= hello[i] - 'A' + 1;
	}
	return a % 47;
}

int main() {
	string comet, group;
	fin >> comet >> group;
	if (score(comet) == score(group)) {
		fout << "GO\n";
	}
	else fout << "STAY\n";
	return 0;
}
