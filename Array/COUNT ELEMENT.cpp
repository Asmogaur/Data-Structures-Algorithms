#include <iostream>
using namespace std;

int CountElement(int arr[], int n, int key) {
    
    int count = 0;
    
    for(int i = 0;i < n; i++) {
        
        if(arr[i] == key) {
            count ++;
        }
    }
    return count;
}
int main() {
    
    int Array[1000];
    int num, key;
    cin >> num;
    
    for(int i = 0;i < num; i++) {
        cin >> Array[i];
    }
    cin >> key;
    
    int times = CountElement(Array, num, key);
    cout << "Number of times : " << times;
    
	return 0;
}
