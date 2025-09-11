#include <iostream>

using namespace std;

const int UNSEEN = 0x3f3f3f3f;

int d[101][101];
int n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
           cin >> d[i][j];
        }
    }

    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <=n; i++) {
            if (i == j) continue;
            if (d[i][j] == 0) continue;
            for (int k = 1; k <= n; k++) {
                if (i == k) continue;
                if (d[j][k] == 0) continue;
                d[i][k] = min(d[i][k], d[i][j] + d[j][k]);
            }
        }
    }

    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << d[a][b] << "\n";
    }
}