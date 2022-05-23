#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    while(row <= n) {

        int col = 1;
        while(col <= n-row+1) {
            cout << col << " ";
            col = col + 1;
        }
        int col2 = 2;
        while(col2 < 2*row) {
            cout << "*" << " ";
            col2 = col2 + 1;
        }
        int col3 = 1; int val = n - row + 1;
        while(col3 <= n-row+1) {
            cout << val << " ";
            col3 = col3 + 1;
            val = val - 1;
        }

        cout << endl;
        row = row + 1;
    }
    
}
