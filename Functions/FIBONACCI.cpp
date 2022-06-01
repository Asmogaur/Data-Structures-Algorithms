#include <iostream>
using namespace std;

void Fibonacci(int num) {
    
    int a1 = 0, a2 = 1, a3 = 0;
    cout << "Fibonacci Series : " << a1 << "," << a2;
    
    for(int i = 3; i <= num; i++) {
        a3  = a1 + a2;
        
        cout <<"," << a3;
        
        a1 = a2;
        a2 = a3;
    }
}
int main() {
    
    int n;
    cin >> n;
    
    Fibonacci(n);
    
	return 0;
}
