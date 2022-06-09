#include <iostream>
using namespace std;

void Reverse(int arr[], int n) {
    
    int start = 0;
    int end = n-1;
    
    while(start <= end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void PrintArray(int arr[], int n) {
    
    for(int i = 0;i < n; i++) {
        
        cout << arr[i] << " ";
    }
}
int main() {
    
    int Array[100];
    int num;
    cin >> num;
    
    for(int i = 0;i < num; i++) {
        cin >> Array[i];
    }
    
    Reverse(Array,num);
    
    PrintArray(Array,num);

	return 0;
}
