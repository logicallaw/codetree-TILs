#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    cin >> t;
    if(t < 0) {
        cout << "ice";
    } else if (t >= 100) {
        cout << "vapor";
    } else {
        cout << "water";
    }
    return 0;
}