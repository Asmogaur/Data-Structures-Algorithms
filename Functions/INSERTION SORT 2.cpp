#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    int i = 1;
    
    while(i < n) {
        int temp = arr[i];
        int j = i - 1;
        
        while(j >= 0) {
            
            if(arr[j] > temp) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }
            j--;
        }
        i++;
        arr[j + 1] = temp;
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
    
    InsertionSort(array, num);
    printArray(array, num);
    
	return 0;
}
