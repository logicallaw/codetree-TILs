#include <iostream>
using namespace std;

int n, m;

int arr[100][100] {};
bool visited[100][100] {};

bool isRange(int& i, int& j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

bool isPass = false;

void dfs(int x, int y) {
    int dx[2] = {1, 0};
    int dy[2] = {0, 1};

    if(x == (n-1) && y == (m-1)) {
        isPass = true;
    }

    visited[x][y] = true;
    for(int i{ 0 }; i < 2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(isRange(nx, ny) && !visited[nx][ny] && arr[nx][ny] == 1) {
            dfs(nx, ny);
        }
    }
}

int main(void) {
    cin >> n >> m;
    for(int i{ 0 }; i < n; i++) {
        for(int j{ 0 }; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    dfs(0, 0);

    if(isPass) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}