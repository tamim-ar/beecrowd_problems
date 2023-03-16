#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, n = 3.14159, R;
    cin >> R;
    R = R*R;
    cout << "A=" << fixed << setprecision(4) << n*R << endl;
    return 0;
}