#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    
    for(int i = 0; i < n - 1; i++) {
        
        for(int j = 0; j < n - 1 - i; j++) {
            
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int n) {
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    
    int array[1000];
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> array[i];
    }
    BubbleSort(array, num);
    printArray(array, num);
    
	return 0;
}
