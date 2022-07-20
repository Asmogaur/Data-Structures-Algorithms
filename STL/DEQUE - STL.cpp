#include <iostream>
#include <deque>
using namespace std;

int main() {
    
    deque<int> dq;
    
    dq.push_back(2);
    dq.emplace_back(4);
    
    cout << "element added from back: ";
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
    
    dq.push_front(3);
    dq.emplace_front(1);
    
    cout << "element added from front: ";
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
    
    dq.pop_back();
    dq.pop_front();
    
    cout << "element removed from both sides: ";
    for(auto i : dq) {
        cout << i << " ";
    }
	return 0;
}
