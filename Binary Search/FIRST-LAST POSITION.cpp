#include <iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int key) {
    
    int start = 0;
    int end = n - 1;
    int ans = -1;
    
    while(start <= end) {
        
        int mid = start + (end - start)/2;
        
        if(key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}
int LastOccurance(int arr[], int n, int key) {
    
    int start = 0;
    int end = n - 1;
    int ans = -1;
    
    while(start <= end) {
        
        int mid = start + (end - start)/2;
        
        if(key == arr[mid]) {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = end - 1;
        }
    }
    return ans;
}
int main() {
    
    int Array[100];
    int num, key;
    cin >> num;
    
    for(int i = 0;i < num; i++) {
        cin >> Array[i];
    }
    cin >> key;
    
    int First = FirstOccurance(Array, num, key);
    int Last = LastOccurance(Array, num, key);
    
    cout << "First Index : " << First << endl;
    cout << "Last Index : " << Last;
	return 0;
}
