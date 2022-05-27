#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    switch(n) {

        case 1 : cout << "order noodles " << endl;
                 break;
        
        case 2 : cout << "order gol gappe" << endl;
                 break;

        case 3 : cout << "order chaat" << endl;
                 break;

        case 4 : cout << "order pau bhaaji" << endl;
                 break;
                 
        default : cout << "ja paani pk aa" << endl;
    }
}
