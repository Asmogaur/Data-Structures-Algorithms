#include <iostream>
using namespace std;

void Counting(int num) {
    
    for(int i = 1; i <= num; i++) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    
    int n;
    cin >> n;
    
    Counting(n);
    
	return 0;
}
