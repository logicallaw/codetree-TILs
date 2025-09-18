#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#define int long long

using namespace std;

int V, E;
const int UNSEEN = LONG_MAX;

vector<pair<int, int>> adj[10001];


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> V >> E;

    int w[V+1];
    bool visited[V+1];

    for (int i = 1; i <= V; i++) {
        w[i] = UNSEEN;
        visited[i] = false;
    }

    while (E--) {
        int A, B, C;
        cin >> A >> B >> C;
        adj[A].push_back({C, B});
        adj[B].push_back({C, A});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    w[1] = 0;
    visited[1] = true;
    for (pair fringe : adj[1]) {
        w[fringe.second] = fringe.first;
        pq.push(fringe);
    }

    while (!pq.empty()) {
        pair<int, int> tree_vertex = pq.top();
        pq.pop();

        if (w[tree_vertex.second] != tree_vertex.first) {
            continue;
        }
        visited[tree_vertex.second] = true;

        for (pair fringe: adj[tree_vertex.second]) {
            if (visited[fringe.second] == true) {
                continue;
            }
            w[fringe.second] = min(w[fringe.second], fringe.first);
            pq.push({w[fringe.second], fringe.second});
        }
    }

    int total = 0;
    for (int i = 1; i <= V; i++) {
        total += w[i];
    }
    cout << total;
}