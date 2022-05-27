#include <iostream>
using namespace std;

int power(int num1, int num2) {

    int answer = 1;
    for(int i = 1; i <= num2 ; i++) {
        answer = answer * num1;
    }
    return answer;
}
int main() {

    int a, b;
    cin >> a >> b;

    int ans = power(a,b);
    cout << ans << endl;
}
