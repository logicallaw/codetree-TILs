#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;
    if(m == 1) {
        m = 13;
    } else if (m == 2) {
        m = 14;
    }
    if(m >= 12) {
        cout << "Winter";
    } else if (m >= 9) {
        cout << "Fall";
    } else if (m >= 6) {
        cout << "Summer";
    } else {
        cout << "Spring";
    }
    return 0;
}