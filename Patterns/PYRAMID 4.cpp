#include <iostream>
using namespace std;

int main() {
    
    int n ;
    cin >> n;

     int row  = 1;
     while(row <= n) {

         int col = 1, num = (row + col - 1);
         while(col <= row) {
             cout << num << " " ; 
             col = col + 1;
             num = num - 1;
         }
         cout << endl;
         row = row + 1 ;
    }
         int row2 = 1;
         while(row2 <= n) {

             int col2 = 1, num2 = (n - row2 + 1);
             while(col2 <= n-row2+1) {
                 cout << num2 << " ";
                 col2 = col2 + 1;
                 num2 = num2 - 1;
             }
             cout << endl;
             row2 = row2 + 1;
     }
}


