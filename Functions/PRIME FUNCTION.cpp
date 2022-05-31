#include <iostream>
using namespace std;

bool IsPrime(int n) {
    
    for(int i = 2; i < n; i ++) {
        
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    
    int num;
    cin >> num;
    
    if(IsPrime(num)) {
        cout << "Prime Number";
    }
    else {
        cout << "Not Prime Number";
    }
	return 0;
}
