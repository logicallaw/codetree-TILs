#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    string r1 = (a % 2 == 0) ? "even" : "odd";
    string r2 = (b % 2 == 0) ? "even" : "odd";
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}