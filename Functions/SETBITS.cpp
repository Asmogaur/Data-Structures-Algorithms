#include <iostream>
using namespace std;

int SetBits(int a, int b) {
    
    int count1 = 0, count2 = 0;
    
    while(a !=0) {

        int rem1 = a % 2;
        
        if(rem1 == 1) {
            count1 ++;
        }
        a = a/2;
    }
    
    while(b != 0) {
        int rem2 = b % 2;
        
        if(rem2 == 1) {
            count2 ++;
        }
        b = b/2;
    }
    int Answer = count1 + count2;
    return Answer;
}
int main() {
    
    int a, b;
    cin >> a >> b;
    
    int Count  = SetBits(a,b);
    cout << "Total No. of Set Bits = " << Count;
	return 0;
}
