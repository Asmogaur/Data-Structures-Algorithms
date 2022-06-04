#include <iostream>
#include <climits>
using namespace std;

int getMin(int arr[], int n) {
    
    int Min = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        
        if(arr[i] < Min) {
            Min = arr[i];
        }
    }
    return Min;
}
int getMax(int arr[], int n) {
    
    int Max = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        
        if(arr[i] > Max) {
            Max = arr[i];
        }
    }
    return Max;
}
int main() {
    
    int size;
    cin >> size;
    int Number[100];
    
    for(int i = 0; i < size; i++) {
        cin >> Number[i];
    }
    cout << "Maximun Value : " << getMax(Number, size) << endl;
    cout << "Minimum Value : " << getMin(Number, size) << endl;
	return 0;
}
