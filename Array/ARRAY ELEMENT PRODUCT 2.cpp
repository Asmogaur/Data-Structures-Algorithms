#include <iostream>
using namespace std;

int ProductArray(int arr[], int num) {
    
    int prod = 1;
    for(int i = 0;i < num;i++) {
        cin >> arr[i];
        
        prod = prod * arr[i];
    }
    return prod;
}
int main() {
    
    int Array[100];
    int n;
    cin >> n;
    
    for(int i = 0;i < n;i++) {
        cin >> Array[i];
    }
    int Ans = ProductArray(Array,n);
    cout << Ans;
	return 0;
}
