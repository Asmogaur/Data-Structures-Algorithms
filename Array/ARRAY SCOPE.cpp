#include <iostream>
using namespace std;


void update(int arr[], int num) {
    
    arr[1] = 0;
    arr[3] = 0;
    cout << "Inside the function : ";
    for(int i = 0; i < num; i++){
        cout << arr[i];
    }
}
int main() {
    
    int Array[100] = {3,5,6,7};
    int n = 4;
    
    update(Array,4);
    
    cout << endl;
    cout << "Inside the main : ";
    for(int i = 0;i < n; i++) {
        cout << Array[i];
    }
	return 0;
}
