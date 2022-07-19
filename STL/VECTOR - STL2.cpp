#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v(1, 20);
    
    v.insert(v.begin(), 10);
    v.insert(v.end(), 30);
    v.insert(v.end(), 2, 40);
    
    cout << "after insertion: ";
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    vector<int> a(2,50);
    v.insert(v.begin() + 2, a.begin(), a.end());
    
    cout << "after insertion with another vector: ";
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    v.erase(v.begin() + 2);
    
    cout << "after erase: ";
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    v.erase(v.begin() + 3, v.begin() + 5);
    
    cout << "after erase second time: ";
    for(auto i : v) {
        cout << i << " ";
    }
	return 0;
}
