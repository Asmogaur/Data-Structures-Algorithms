#include <iostream>
using namespace std;

int factorial(int num) {
    
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCrFunction(int n, int r) {
    
    int d = (n-r);
    int ans = 0;
    ans = factorial(n)/(factorial(r) * factorial(d));
    
    return ans;
}
int main() {
    
    int n,r;
    cin >> n >> r;
    
    int Ans = nCrFunction(n,r);
    cout << Ans;
	return 0;
}
