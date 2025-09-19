#include <iostream>
#include <map>

using namespace std;

int N, M;
map<int, int> m;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;

        m.insert({x, i});
    }

    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;

        if (m.find(x) == m.end()) {
            cout << "-1\n";
        } else {
            cout << m[x] << "\n";
        }
    }

    return 0;
}
