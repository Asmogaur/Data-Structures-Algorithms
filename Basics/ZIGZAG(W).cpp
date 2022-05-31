#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    int i = 1;
    while(i <= n) {

        int j = 1;
        while(j <= n) {

            if(i == j) {
            cout << "*" << " ";
            }
            else {
            cout <<"  ";
            }
            j = j + 1;
        }
        int k = 1;
        while(k < n) {

            if((i + k) == n) {
                cout << "*" << " ";
            }
            else {
                cout << "  ";
            }
            k = k + 1;
        }
        int l = 1;
        while(l < n) {
            
            if(i == l + 1) {
                cout << "*" << " ";
            }
            else {
                cout << "  ";
            }
            l = l + 1;
        }
        int m = 1;
        while(m < n) {
            
            if((i + m) == n) {
                cout << "*" <<" ";
            }
            else {
                cout <<"  ";
            }
            m = m + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
