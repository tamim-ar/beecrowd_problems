#include <iostream>


using namespace std;

int main(){
    int a, b, c, s, total1, total2;

    cin >> a >> b >> c;

    total1 = (a+b+abs(a-b))/2;
    total2 = (total1+c+abs(total1-c))/2;

    cout << total2 << " eh o maior" << endl;
}