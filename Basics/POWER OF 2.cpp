#include <iostream>
using namespace std;

int main() {
    
    int num, count = 0;
    cin >> num;
    
    while(num > 0) {
        int rem = num % 2;
        
        if(rem == 1) {
            count++;
        }
        num = num/2;
    }
    if(count == 1) {
        cout << "Number is power of 2";
    }
    else {
        cout << "Number is not power of 2";
    }
	return 0;
}
