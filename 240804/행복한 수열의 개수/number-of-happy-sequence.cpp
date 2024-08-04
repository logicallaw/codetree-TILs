#include <iostream>
using namespace std;
int getRow(int row, const int col, int matrix[][100], const int n, const int m) {
    if(m == 1) return 1;
    int cnt = 1;
    row++;
    for(; row < n; row++) {
        if(matrix[row - 1][col] == matrix[row][col]) {
            cnt++;
            if(cnt == m) {
                return 1;
            }
        } else {
            cnt = 1;
        }
    }
    return 0;
}
int getCol(const int row, int col, int matrix[][100], const int n, const int m) {
    if(m == 1) return 1;
    int cnt = 1;
    col++;
    for(; col < n; col++) {
        if(matrix[row][col-1] == matrix[row][col]) {
            cnt++;
            if(cnt == m) {
                return 1;
            }
        } else {
            cnt = 1;
        }
    }
    return 0;
}
int main() {
    int n, m;
    cin >> n >> m;
    int matrix[100][100];
    for(int i{ 0 }; i < n; i++) {
        for(int j{ 0 }; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int cnt = 0;
    for(int i{ 0 }; i < n; i++) {
        cnt += getRow(0, i, matrix, n, m);
        cnt += getCol(i, 0, matrix, n, m);
    }
    cout << cnt;
    return 0;
}