#include <iostream>
using namespace std;

void PrintArray(int arr[], int size) {
    
    cout << "Print" << endl;
    
    for(int i = 0;i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Done";
}
int main() {
    
    int arr[10] = {1,2,3,4,5};
    int n = 5;
    
    PrintArray(arr,n);
    
	return 0;
}
