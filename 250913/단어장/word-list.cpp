#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    map<string, int> m;

    while (N--) {
        string s;
        cin >> s;

        if (m.find({s}) == m.end()) {
            m.insert({s, 1});
        } else {
            m[s]++;
        }
    }

    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }
}