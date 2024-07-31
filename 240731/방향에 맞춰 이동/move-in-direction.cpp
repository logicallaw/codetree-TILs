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
        int dir;
        if(c == 'E') {
            dir = 0;
        } else if (c == 'S') {
            dir = 1;
        } else if (c == 'W') {
            dir = 2;
        } else {
            dir = 3;
        }
        x += dx[dir] * d;
        y += dy[dir] * d;
    }
    cout << x << " " << y;
    return 0; 
}