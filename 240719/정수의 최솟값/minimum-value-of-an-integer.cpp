#include <iostream>
using namespace std;
int min(int x, int y){
    return (x >= y) ? y : x;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(min(a,b),c);
    return 0;
}