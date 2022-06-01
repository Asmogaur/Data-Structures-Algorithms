#include <iostream>
using namespace std;

void dummy(int n) {
    n ++;
    cout << "value of dummy function n is : " << n << endl;
}
int main() {
    
    int n;
    cin >> n;
    
    dummy(n);
    
    cout << "value of main function n : " << n;
	return 0;
}
