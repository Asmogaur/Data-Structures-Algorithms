#include <iostream>
using namespace std;

int main() {

    int n,i;
    cin >> n;
    int a = 0, b = 1;
    int fib = 0;
    cout << a <<", " << b;

    for(i = 3; i <= n; i++) {
        fib = a+b;
        cout << ", " << fib;
        a = b;
        b = fib; 

    }
}
