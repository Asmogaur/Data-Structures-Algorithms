#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {

        int j = 1;
        while(j <= n) {

        if(i == 1 || j == 1 || i == n || j == n || i == n/2+1 || j == n/2+1 || 
        i == n/4+1 && j == n/4+1 || i == n/4+1 && j == n/2+3 || i == n/2+3 && j == n/4+1 ||
         i == n/2+3 && j == n/2+3) {
            cout << "*" << "  ";
            }
            else {
                cout << "   ";
            }
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
