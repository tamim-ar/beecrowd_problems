#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float A, B, C;
    double avg;

    cin >> A >> B >> C;
    
    avg = (A*2 + B*3 + C*5) / 10;

    cout << fixed << setprecision(1) << "MEDIA = " << avg << endl;
    return 0;
}