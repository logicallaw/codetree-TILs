#include <iostream>
using namespace std;

int N, M;
int arr[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int j = -1;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        while ((j + 1 < N) && (sum + arr[j+1] < M)) {
            sum += arr[++j];
        }
        if ((j + 1) >= N) {
            break;
        }
        if ((sum + arr[j + 1]) == M) {
            cnt++;
        }
        sum -= arr[i];
    }

    cout << cnt;

    return 0;
}