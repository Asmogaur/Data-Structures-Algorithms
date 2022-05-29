#include <iostream>
using namespace std;

int main() {
    
    int n,r,d;
    cin >> n >> r;
    
    d = (n-r);
    int N = 1, R = 1, D = 1, Ans = 0;
    
    for(int i = 1; i <= n; i++) {
        N = N * i;
    }
    
    for(int j = 1; j <= r; j++) {
        R = R * j;
    }
            
    for(int k = 1; k <= d; k++) {
        D = D * k;
    }
                
    Ans = N/(R * D);
                
    cout << Ans;
                
	return 0;
}
