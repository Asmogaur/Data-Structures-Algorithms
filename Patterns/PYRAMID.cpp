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

        int col2 = 1, count = row - 1;
        while(col2 < row) {
            cout << count << " ";
            col2 = col2 + 1;
            count = count - 1;
        }
        cout << endl;
        row = row + 1;
    }

}
