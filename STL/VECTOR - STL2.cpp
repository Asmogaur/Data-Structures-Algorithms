#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v(5,2);
    
    cout << "parent vector : ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    vector<int> a(v);
    
    cout << endl << "copy vector : ";
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "size of a before clear : " << a.size() << endl;
    a.clear();
    cout << "size of a after clear : " << a.size();
    
	return 0;
}
