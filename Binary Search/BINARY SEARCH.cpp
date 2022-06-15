#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
    
    int start = 0;
    int end = n - 1;
    
    int mid = start + (end - start)/2;
    
    while(start <= end) {
        
        if(arr[mid] == key) {
            return mid;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main() {
    
    int Array[100];
    int num, key;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> Array[i];
    }
    cin >> key;
    
    int found = BinarySearch(Array, num, key);
    cout << "Index of Element : " << found;
    
	return 0;
}
