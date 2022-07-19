#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v(2,30);
    
    vector<int> a(2,40);
    
    cout << "before swap in v: ";
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    v.swap(a);
    
    cout << "after swap in v: ";
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    vector<int> f(a);
    
    cout << "after copy a in f: ";
    for(auto i : f) {
        cout << i << " ";
    }
    cout << endl;
    
    f.insert(f.end(), v.begin(), v.end());
    
    cout << "after copy a and insert v in f: ";
    for(auto i : f) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "empty or not? : " << f.empty() << endl;
    
    f.clear();
    
    cout << "size of f vector: " << f.size() << endl;
    
    cout << "empty or not? : " << f.empty();
    
	return 0;
}
