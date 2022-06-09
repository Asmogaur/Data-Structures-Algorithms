#include <iostream>
#include <math.h>
using namespace std;

int order(int n) {
    int count = 0;
    
    while(n > 0) {
        n = n/10;
        count ++;
    }
    return count;
}
int Armstrong(int n) {
    
    int ans = 0;
    int x = order(n);
    
    while(n > 0) {
        int rem = n % 10;
        ans = ans + pow(rem,x);
        n = n/10;
    }
    return ans;
}
int main() {
    
    int num;
    cin >> num;
    
    int cum = Armstrong(num);
    
    if(cum == num) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not a Armstrong Number";
    }
    return 0;
}
