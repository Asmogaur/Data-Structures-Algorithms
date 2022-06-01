#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    while(i <= n) {
        
        int space = 1;
        while (space < i) {
            
            cout << "  ";
            space = space + 1;
        }
        int j = 1;
        while(j <= n-i+1) {
            
            cout << "*" << " ";
            j = j + 1;
        }
        int k = 1;
        while(k <= n-i) {
            
            cout << "*" << " ";
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
    int l = 1;
    while(l <= n) {
        
        int space2 = 1;
        while(space2 <= n-l) {
            
            cout << "  ";
            space2 = space2 + 1;
        }
        int m = 1;
        while(m <= l) {
            
            cout << "*" << " ";
            m = m + 1;
        }
        int p = 1;
        while(p < l) {
            
            cout << "*" << " ";
            p = p + 1;
        }
        cout << endl;
        l = l + 1;
    }
	return 0;
}
