#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int i = 2, F = 0;
    int f1 = 0, f2 = 1;
    cout << f1 << ", " << f2;

    while(i < n){
       F = f1 + f2;
       cout <<", " << F; 
       f1 = f2;
       f2 = F;

       i = i + 1;
    }

}
