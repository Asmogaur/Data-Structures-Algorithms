#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    char ch;
    cin >> ch;
    while(n !=0) {

        switch(ch) {
            case '1' : cout << "$100 Notes : " << (n/100) << endl;
                       n = n % 100;

            case '2' : cout << "$50 Notes : " << (n/50) << endl;
                       n = n % 50;

            case '3' : cout << "$20 Notes : " << (n/20) << endl;
                       n = n % 20;

            case '4' : cout << "$10 Notes : " << (n/10) << endl;
                       n = n % 10;
                       
            case '5' : cout << "$1 Notes : " << n << endl;
                       n = n % 1;
        }
        return 0 ;
    }
}
