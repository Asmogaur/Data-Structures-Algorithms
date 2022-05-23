#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int row = 1;

    while(row <= n) {

        int space = 1;
        while(space <= n-row) {
            cout <<"  ";
            space = space + 1;
        }

        int col = 1; int num = (row + col) - 1;
        while(col <= row) {
            cout << num << " ";
            col = col + 1;
            num = num + 1;
        }

        int col2 = 1; int val = (2*row) - 2;
        while(col2 < row) {
            cout << val << " ";
            col2 = col2 + 1;
            val = val - 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}
