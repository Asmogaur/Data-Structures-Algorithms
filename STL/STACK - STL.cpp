#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack<int> st;
    st.push(1);  //{1}
    st.push(2);  //{2,1}
    st.push(3);  //{3,2,1}
    st.push(3);  //{3,3,2,1}
    st.push(5);  //{5,3,3,2,1}
    
    cout << "size of stack: " << st.size() << endl;
    cout << "top element: " << st.top() << endl;
    
    st.pop();
    
    cout << "top element: " << st.top() << endl;
    cout << "is empty?: " << st.empty() << endl;
    
    stack<int> st2;
    st2.push(4);
    st2.swap(st);
    
    cout << "top element in st2: " << st2.top() << endl;
    cout << "top element in st: " << st.top() << endl;
	return 0;
}
