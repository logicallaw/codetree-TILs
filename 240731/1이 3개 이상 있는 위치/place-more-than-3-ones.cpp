#include <iostream>
using namespace std;
bool isRange(int, int, int);
bool isThreeNum(int, int, int, int**);

bool isRange(int x, int y, int n) {
    return (0 <= x && x < n) && (0 <= y && y < n);
}
bool isThreeNum(int x, int y, int n, int** array) {
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int cnt = 0;
    for(int d{ 0 }; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if(isRange(nx, ny, n) && array[nx][ny] == 1) {
            cnt++;
        }
    }
    if(cnt >= 3) {
        return true;
    } else {
        return false;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int** array = new int*[n];
    for(int i{ 0 }; i < n; i++) {
        array[i] = new int[n];
        for(int j{ 0 }; j < n; j++) {
            cin >> array[i][j];
        }
    }
    int cnt = 0;
    for(int i{ 0 }; i < n; i++) {
        for(int j{ 0 }; j < n; j++) {
            if(isThreeNum(i, j, n, array)) {
                cnt++;
            }
        }
    }

    cout << cnt;
    for(int i{ 0 }; i < n; i++) {
        delete array[i];
    }
    delete[] array;
    return 0;
}