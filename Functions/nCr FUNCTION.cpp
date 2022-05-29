#include <iostream>
using namespace std;

int Combination(int n, int r) {
    int d, Ans = 0;
    d = (n-r);
    int N = 1, R = 1, D = 1;
    
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
    return Ans;
}
    
int main() {
    
    int num, rum;
    cin >> num >> rum;
    
    int Answer = Combination(num, rum);
    cout << Answer;
    
	return 0;
}
