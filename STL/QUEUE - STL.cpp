#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.push(3);  //{1,2,3}
    q.push(4);  //{1,2,3,4}
    
    cout << "back element: " << q.back() << endl;
    cout << "front element: " << q.front() << endl;
    
    q.back() += 3;  //{1,2,3,7}
    q.front() += 5;  //{6,2,3,7}
    
    cout << "back element: " << q.back() << endl;
    cout << "front element: " << q.front() << endl;
    
    q.pop();
    
    cout << "front element: " << q.front() << endl;
    
	return 0;
}
