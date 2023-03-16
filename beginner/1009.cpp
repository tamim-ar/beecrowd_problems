#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    double salary, sell, total;

    cin >> name >> salary >> sell;

    total = salary + (sell*0.15);

    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;
    return 0;
}