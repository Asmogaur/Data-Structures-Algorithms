#include <iostream>
using namespace std;

bool IsEven(int num) {
    if(num % 2 == 0) {
        return 1;
    }
    else {
        return 0 ;
    }
}
int main() {
    
    int n;
    cin >> n;
    
    if(IsEven(n)) {
        cout << "Number is Even" << endl;
        
    }
    else {
        cout << "Number is Odd" << endl;
    }
	return 0;
}
