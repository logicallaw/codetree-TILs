#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double d;
    cin >> d;
    if(d <= 0) {
        cout << setprecision(2) << d;
    } else {
        cout << setprecision(4) << d;
    }
    return 0;
}