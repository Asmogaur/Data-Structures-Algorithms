#include <iostream>
using namespace std;

int main() {

     int a, b, c;
     cin >> a >> b >> c;

     while(a + b > c && b + c > a && a + c > b) {

         if(a == b && b == c) {
             cout << "Triangle is Equilateral" << endl;
         }
         else if(a == b) {
             cout << "Triangle is Isosceles" << endl;
         }
         else {
             cout << "Triangle is Scalene" << endl;
         }
         return 0;
     }
     cout << "No Traingle" << endl;
}
