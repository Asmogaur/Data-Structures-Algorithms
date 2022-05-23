#include <iostream>
using namespace std;

int main() {

     int ch;
     cin >> ch;

     if(ch >= 65 && ch <= 90){
         cout << "Uppercase" << endl;
     }
     else if(ch >= 97 && ch <= 122){
         cout << "Lowercase" << endl;
     }
     else if(ch >= 48 && ch <= 57){
         cout << "Number Digit" << endl;
     }
     else {
         cout << "Invalid Response" << endl;
     }
}

