#include <iostream>
using namespace std;

int main() {

    int a,b;
    cin >> a;
    cout << "Value of a : " << a << endl;
    cin >> b;
    cout << "Value of b : " << b << endl;
    
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Value of a after swap : " << a << endl;
    cout << "Value of b after swap : " << b << endl;
}
