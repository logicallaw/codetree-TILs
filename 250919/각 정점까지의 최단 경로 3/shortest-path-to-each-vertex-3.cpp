#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;
const int UNSEEN = 0x7fffffff;
vector<pair<int, int>> v[101];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    while (M--) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({c, b});
    }

    int d[N+1];
    bool visited[N+1];
    for (int i = 1; i <= N; i++) {
        d[i] = UNSEEN;
        visited[i] = false;
    }

    d[1] = 0;
    visited[1] = true;
    for (pair<int, int> fringe : v[1]) {
        if (d[fringe.second] > fringe.first + d[1]) {
            d[fringe.second] = fringe.first + d[1];
            Q.push({d[fringe.second], fringe.second});
        }
    }

    while (!Q.empty()) {
        pair<int, int> tree_vertex = Q.top();
        Q.pop();

        if (d[tree_vertex.second] != tree_vertex.first) {
            continue;
        }
        if (visited[tree_vertex.second]) {
            continue;
        }
        visited[tree_vertex.second] = true;

        for (pair<int, int> fringe : v[tree_vertex.second]) {
            if (visited[fringe.second]) {
                continue;
            }
            if (d[fringe.second] > d[tree_vertex.second] + fringe.first) {
                d[fringe.second] =  d[tree_vertex.second] + fringe.first;
                Q.push({d[fringe.second], fringe.second});
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        if (d[i] == UNSEEN) {
            cout << "-1\n";
        } else {
            cout << d[i] << "\n";
        }
    }
}