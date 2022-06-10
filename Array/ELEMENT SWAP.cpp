#include <iostream>
using namespace std;

void Swap(int arr[], int n) {
    
    int first = 0;
    int second  = 1;
    
    while(first < n && second < n) {
        
        swap(arr[first],arr[second]);
        first = first + 2;
        second = second + 2;
    }
}
void PrintArray(int arr[], int n) {
    
    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    
    int Array[100];
    int num;
    cin >> num;
    
    for(int i = 0;i < num;i++) {
        cin >> Array[i];
    }
    Swap(Array,num);
    
    PrintArray(Array,num);
	return 0;
}
