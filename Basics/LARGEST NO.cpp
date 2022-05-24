#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if(a > b && a > c) {
        cout << "greatest among 3 is : " << a << endl;
    }
    else if(b > c) {
        cout << "greatest among 3 is : " << b << endl;
    }
    else {
        cout << "greatest among 3 is : " << c << endl;
    }
    return 0 ;
}
