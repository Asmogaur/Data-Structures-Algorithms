#include <iostream>
using namespace std;

int main() {
    
    int Arr[100];
    int sum = 0, num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> Arr[i];
    }
    for(int i = 0; i < num; i++) {
        sum = sum + Arr[i];
    }
    cout << sum;
	return 0;
}
