#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    printf("%d %.1f", a + b, static_cast<double>(a + b) / 2);
    return 0;
}