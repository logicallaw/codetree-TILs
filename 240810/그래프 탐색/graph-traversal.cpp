#include <iostream>
#include <vector>
using namespace std;

vector<int> edges[1001] {};
bool visited[1001] {};

void dfs(int vertex) {
    visited[vertex] = true;
    for(const int child : edges[vertex]) {
        if(!visited[child]) {
            dfs(child);
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    for(int i{ 0 }; i < m; i++) {
        int x, y;
        cin >> x >> y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    dfs(1);
    int cnt = 0;
    for(const int child : edges[1]) {
        if (visited[child]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}