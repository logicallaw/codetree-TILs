#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    map<int, int> m;
    int cnt = 0;
    while (N--) {
        int x;
        cin >> x;

        if (m.find(x) == m.end()) {
            m.insert({x, ++cnt});
        }
    }

    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }
}