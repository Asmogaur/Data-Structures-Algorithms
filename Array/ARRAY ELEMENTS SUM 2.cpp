#include <iostream>
using namespace std;

int SumArray(int arr[], int n) {
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    
    int Array[100];
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> Array[i];
    }
    
    cout << "Sum of elements of Array: " << SumArray(Array,num);
	return 0;
}
