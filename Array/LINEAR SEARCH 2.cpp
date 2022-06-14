#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key) {
    
    for(int i = 0;i < size; i++) {
        
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    
    int Array[100];
    int num, key;
    
    cin >> num;
    
    for(int i = 0;i < num; i++) {
        
        cin >> Array[i];
    }
    cin >> key;
    
    int found = LinearSearch(Array,num,key);
    cout << "Index : " << found;
	return 0;
}

