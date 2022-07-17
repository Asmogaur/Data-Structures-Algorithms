#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
     
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    
    cout << "before pop : ";
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "after pop : ";
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "clear the vector : ";
    v.clear();
     
	return 0;
}
