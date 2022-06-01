#include <iostream>
using namespace std;

int AP(int n) {
    
    int Answer = (3 * n) + 7;
    
    return Answer;
}
int main() {
    
    int num;
    cin >> num;
    
    int Ans = AP(num);
    cout << Ans;
	return 0;
}
