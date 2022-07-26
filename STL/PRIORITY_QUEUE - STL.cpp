#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    priority_queue<int> pq;  //first element store as greatest value (MAX HEAP)
    pq.push(4);  //{4}
    pq.push(2);  //{4,2}
    pq.push(6);  //{6,4,2}
    pq.push(8);  //{8,6,4,2}
    
    cout << "top element: " << pq.top() << endl;
    
    pq.pop();
    
    cout << "top element: " << pq.top() << endl;
    
    priority_queue<int, vector<int>, greater<int>> pq2;  //MIN HEAP
    pq2.push(6);  //{6}
    pq2.push(4);  //{4,6} 
    pq2.push(2);  //{2,4,6}
    pq2.push(8);  //{2,4,6,8}
    
    cout << "top element: " << pq2.top() << endl;
    
    pq2.pop();
    
    cout << "top element: " << pq2.top() << endl;

	return 0;
}
