#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0, y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1 ,0 ,1};
    int dir = 3;
    string word;
    cin >> word;
    for(int i{ 0 }; i < word.length(); i++) {
        char c = word[i];
        if(c == 'L') {
            dir--;
            if(dir < 0) {
                dir = 3;
            }
        } else if (c == 'R') {
            dir++;
            if(dir > 3) {
                dir = 0;
            }
        } else {
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x << " " << y;
    return 0;
}