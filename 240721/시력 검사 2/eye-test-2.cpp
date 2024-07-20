#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double d;
    cin >> d;
    if(d >= 1.0) {
        cout << "High";
    } else if (d >= 0.5) {
        cout << "Middle";
    } else {
        cout << "Low";
    }
    return 0;
}