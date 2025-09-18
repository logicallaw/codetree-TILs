#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#define int long long

using namespace std;

int V, E;
const int UNSEEN = LONG_MAX;

vector<pair<int, int>> v[10001];


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> V >> E;

    while (E--) {
        int A, B, C;
        cin >> A >> B >> C;
        v[A].push_back({C, B});
        v[B].push_back({C, A});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int d[V+1];
    bool visited[V+1];

    for (int i = 1; i <= V; i++) {
        d[i] = UNSEEN;
        visited[i] = false;
    }
    d[1] = 0;
    for (pair fringe : v[1]) {
        d[fringe.second] = fringe.first;
        pq.push(fringe);
    }

    while (!pq.empty()) {
        pair<int, int> tree_vertex = pq.top();
        pq.pop();

        if (d[tree_vertex.second] != tree_vertex.first) {
            continue;
        }

        for (pair fringe: v[tree_vertex.second]) {
            if (visited[fringe.second] == true) {
                continue;
            }
            d[fringe.second] = min(d[fringe.second], fringe.first);
            visited[fringe.second] = true;
            pq.push({d[fringe.second], fringe.second});
        }
    }

    int total = 0;
    for (int i = 1; i <= V; i++) {
        total += d[i];
    }
    cout << total;
}