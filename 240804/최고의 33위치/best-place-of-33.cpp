#include <iostream>
using namespace std;
int getSolution(int row, int col, int matrix[][20]) {
    int cnt = 0;
    for(int i{ row }; i < (row + 3); i++) {
        for(int j{ col }; j < (col + 3); j++) {
            if(matrix[i][j] == 1) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int matrix[20][20];
    for(int i{ 0 }; i < n; i++) {
        for(int j{ 0 }; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int max = 0;
    for(int i{ 0 }; i <= (n - 3); i++) {
        for(int j{ 0 }; j <= (n - 3); j++) {
            int temp = getSolution(i, j, matrix);
            max = (max < temp) ? temp : max;
        }
    }
    cout << max;
    return 0;
}