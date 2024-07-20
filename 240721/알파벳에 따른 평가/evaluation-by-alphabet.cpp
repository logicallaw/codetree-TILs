#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    cin >> c;
    if(c == 'S') {
        cout << "Superior";
    } else if (c == 'A') {
        cout << "Excellent";
    } else if (c == 'B') {
        cout << "Good";
    } else if (c == 'C') {
        cout << "Usually";
    } else if (c == 'D') {
        cout << "Effort";
    } else {
        cout << "Failure";
    }
    return 0;
}