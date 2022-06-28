#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for(int j = i + 1; j < n; j++) {
            
            if(arr[minIndex] > arr[j])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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
    SelectionSort(array, num);
    printArray(array, num);
    
	return 0;
}
