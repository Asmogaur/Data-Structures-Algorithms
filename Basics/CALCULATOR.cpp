#include <iostream>
using namespace std;

int main() {

    int a,b;
    cin >> a;
    cout << "Enter first No. : " << a << endl;

    cin >> b;
    cout << "Enter second No. : " << b << endl;

    char opo;
    cin >> opo;

    switch(opo) {

        case '+': cout << "Addition : " << (a+b) << endl;
                  break;

        case '-': cout << "Subtraction : " << (a-b) << endl;
                  break;

        case '*': cout << "Multiplication : " << (a*b) << endl;
                  break;

        case '/': cout << "Divison : " << (a/b) << endl;
                  break;

        case '%': cout << "Remainder : " << (a%b) << endl;
                  break;

        default : cout << "Invalid Response!" << endl;
    }
}
