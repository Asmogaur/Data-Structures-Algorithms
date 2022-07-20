#include <iostream>
#include <list>
using namespace std;

int main() {
    
    list<int> l;
    
    l.push_back(2);
    l.emplace_back(3);
    
    cout << "element added from back: ";
    for(auto i : l) {
        cout << i << " ";
    }
    cout << endl;
    
    l.push_front(1);
    l.emplace_front(5);
    
    cout << "element added from front: ";
    for(auto i : l) {
        cout << i << " ";
    }
    cout << endl;
    
    l.pop_front();
    
    cout << "element removed from front: ";
    for(auto i : l) {
        cout << i << " ";
    }
	return 0;
}
