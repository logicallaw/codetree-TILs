#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N;
    cin >> N;

    map<long long, long long> m;
    long long cnt = 0;
    while (N--) {
        long long x;
        cin >> x;

        if (m.find(x) == m.end()) {
            cnt++;
            m.insert({x, cnt});
        }
    }

    map<long long, long long>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }
}