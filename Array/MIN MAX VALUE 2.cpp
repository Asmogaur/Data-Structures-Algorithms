#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n) {
    
    int Maxi = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        
        Maxi = max(Maxi, arr[i]);
    }
    return Maxi;
}
int getMin(int arr[], int n) {
    
    int Mini = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        
        Mini = min(Mini, arr[i]);
    }
    return Mini;
}
int main() {
    
    int Array[100];
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> Array[i];
    }
    cout << "Maximum Value: " << getMax(Array,num) << endl;
    cout << "Minimum VAlue: " << getMin(Array,num) << endl;
	return 0;
}
