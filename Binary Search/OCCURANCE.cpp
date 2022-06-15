#include <iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int key) {
    
    int start = 0;
    int end = n - 1;
    int ans = -1;
    
    while(start <= end) {
        
        int mid = start + (end - start)/2;
        
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key) {
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
        
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    
    int Array[1000];
    int num, target;
    cin >> num;
    
    for(int i = 0;i < num; i++) {
        cin >> Array[i];
    }
    cin >> target;
    
    int First = FirstOccurance(Array, num, target);
    int Last = LastOccurance(Array, num, target);
    
    int times = (Last - First + 1);
    cout << "Times of Occurance: " << times;
    
	return 0;
}
