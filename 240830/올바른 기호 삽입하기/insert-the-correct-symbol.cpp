#include <iostream>
using namespace std;

int n;
int arr[100];
long long dp[100][21];  // DP 테이블 선언. 가능한 숫자 범위는 0~20이므로 크기는 21

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dp[0][arr[0]] = 1;  // 첫 번째 숫자 초기화

    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j <= 20; j++) {
            if (dp[i - 1][j] > 0) {  // 이전 단계에서 j를 만들 수 있다면
                if (j + arr[i] <= 20) {  // 더했을 때 20 이하라면
                    dp[i][j + arr[i]] += dp[i - 1][j];
                }
                if (j - arr[i] >= 0) {  // 뺐을 때 0 이상이라면
                    dp[i][j - arr[i]] += dp[i - 1][j];
                }
            }
        }
    }

    // 마지막 값이 arr[n-1]인 경우의 수 출력
    cout << dp[n-2][arr[n-1]] << endl;

    return 0;
}