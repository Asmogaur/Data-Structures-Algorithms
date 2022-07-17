#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v;
    
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;
    
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;
    
    cout << "before pop : ";
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    
    cout << "after pop : ";
    for(auto i : v) {
        cout << i << " ";
    }
	return 0;
}
