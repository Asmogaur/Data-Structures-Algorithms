#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int key) {
    
    for(int i = 0;i < n; i++) {
        
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int Array[100];
    int num, temp;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> Array[i];
    }
    cin >> temp;
    
    bool found = LinearSearch(Array,num,temp);
     
    if(found) {
        cout << "Key is present";
    }
    else {
        cout << "Key is not present";
    }
	return 0;
}
