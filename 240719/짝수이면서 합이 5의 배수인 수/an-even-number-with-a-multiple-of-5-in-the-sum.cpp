#include <iostream>
using namespace std;
void oddAndFive(int n) {
    if(n % 2 == 0) {
        int sum = 0;
        while(n != 0) {
            sum += (n % 10);
            n /= 10;
        }
        if(sum % 5 == 0) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "No";
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    oddAndFive(n);
    return 0;
}