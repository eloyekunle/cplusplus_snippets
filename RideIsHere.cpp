/*
USER: jack5551
LANG: C++
TASK: ride
*/
#include <fstream>
using namespace std;
ifstream fin("ride.in"); ofstream fout("ride.out");
 
int score(string s){
    int a = 1;
    for(int i = 0; i < s.length(); i++){
        a *= s[i] - 'A' + 1;
    }
    return a % 47;
}
 
int main(){
    string comet, group;
    fin >> comet >> group;
    if(score(comet) == score(group)){
        fout << "GO\n";
    }
    else fout << "STAY\n";
    return 0;
}
