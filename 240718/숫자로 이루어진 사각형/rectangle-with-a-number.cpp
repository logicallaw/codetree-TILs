#include <iostream>
using namespace std;
void printSe(const int& n) {
    int num = 1;
    for(int i{ 0 }; i < n; i++) {
        for(int j{ 0 }; j < n; j++) {
            num = (num > 9) ? 1 : num;
            cout << num++ << " "; 
        }
        cout << endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    printSe(n);
    return 0;
}