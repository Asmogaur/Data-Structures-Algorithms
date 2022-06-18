#include <iostream>
using namespace std;

int PivotElement(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while(start < end) {
        
        int mid = start + (end - start)/2;
        
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start;
}
int main() {
    
    int Array[100];
    int num;
    cin >> num;
    
    for(int i = 0;i < num; i++) {
        cin >> Array[i];
    }
    int pivot = PivotElement(Array, num);
    cout << "Pivot Element's Index : " << pivot;
    
	return 0;
}
