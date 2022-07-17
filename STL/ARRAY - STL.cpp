#include <iostream>
#include <array>
using namespace std;

int main() {
    
    array<int, 5> arr;
    int size = arr.size();
    
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.empty() << endl;
    cout << arr.at(3) << endl;
    cout << arr.front() << endl;
    cout << arr.back();
    
	return 0;
}
