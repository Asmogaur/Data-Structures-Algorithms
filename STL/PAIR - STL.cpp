#include <iostream>
using namespace std;

int main() {
    
    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second << endl;
    
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    
    pair<int, int> arr[] = { {1,2}, {3,4}, {4,5}, {6,7} };
    cout << arr[0].first << " " << arr[1].second << " " << arr[3].first;
	return 0;
}
