#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int sol1(const int row, const int col, int board[][200]) {
    int s1, s2, s3, s4;
    s1 = board[row][col + 1] + board[row + 1][col] + board[row + 1][col + 1];
    s2 = board[row][col] + board[row + 1][col] + board[row + 1][col + 1];
    s3 = board[row][col] + board[row][col + 1] + board[row + 1][col + 1];
    s4 = board[row][col] + board[row + 1][col] + board[row][col + 1];
    int r1 = max(s1, s2);
    int r2 = max(s3, s4);
    return max(r1, r2);
}
int sol2(const int row, int col, int board[][200]) {
    int sum = 0;
    for(int i{ col }; i < (col + 3); i++) {
        sum += board[row][i];
    }
    return sum;
}
int sol3(int row, const int col, int board[][200]) {
    int sum = 0;
    for(int i{ row }; i < (row + 3); i++) {
        sum += board[i][col];
    }
    return sum;
}
int main() {
    int n, m;
    cin >> n >> m;
    int board[200][200];
    for(int i{ 0 }; i < n; i++) {
        for(int j{ 0 }; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int max = 3;

    for(int i{ 0 }; i <= (n-2); i++) {
        for(int j{ 0 }; j <= (m-2); j++) {
            int temp = sol1(i, j, board);
            max = (max < temp) ? temp : max;
        }
    }
    for(int i{ 0 }; i <= (n-1); i++) {
        for(int j{ 0 }; j <= (m-3); j++) {
            int temp = sol2(i, j, board);
            max = (max < temp) ? temp : max;
        }
    }
    for(int i{ 0 }; i <= (n-3); i++) {
        for(int j{ 0 }; j <= (m-1); j++) {
            int temp = sol3(i, j, board);
            max = (max < temp) ? temp : max;
        }
    }
    cout << max;
    return 0;
}