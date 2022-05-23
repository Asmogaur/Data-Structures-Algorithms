#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int row = 1;
    while(row <= n) {

        int space = 1;
        while(space <= n-row) {
            cout << "  ";
            space = space + 1;
        }
        int col = 1;
        while(col <= row) {
            cout << col << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    int row2 = 1;
    while(row2 <= n) {

        int space2 = 1;
        while(space2 < row2) {
            cout << "  ";
            space2 = space2 + 1;
        }
        int col2 = 1;
        while(col2 <= n-row2+1) {
            cout << col2 << " ";
            col2 = col2 + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }
}
