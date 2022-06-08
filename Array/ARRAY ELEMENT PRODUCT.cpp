#include <iostream>
using namespace std;

int main() {
    
    int arr[100];
    int n, prod = 1;
    cin >> n;
    
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
        
        prod = prod * arr[i];
    }
    cout << "Product of Array: " << prod;
    
	return 0;
}
