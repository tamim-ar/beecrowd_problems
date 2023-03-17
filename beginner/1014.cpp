#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int A;
    double B, X;

    cin >> A >> B;

    X = A/B;
    
    cout << fixed << setprecision(3) << X << " km/l" << endl;
}