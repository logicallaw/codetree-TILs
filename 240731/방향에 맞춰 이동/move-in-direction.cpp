#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int x = 0, y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    for(int i{ 0 }; i < n; i++) {
        char c;
        int d;
        cin >> c >> d;
        if(c == 'E') {
            x += dx[0] * d;
        } else if (c == 'S') {
            y += dy[1] * d;
        } else if (c == 'W') {
            x += dx[2] * d;
        } else {
            y += dy[3] * d;
        }
    }
    cout << x << " " << y;
    return 0; 
}