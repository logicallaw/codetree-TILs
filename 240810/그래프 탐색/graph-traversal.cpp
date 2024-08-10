#include <iostream>
#include <vector>
using namespace std;

vector<int> edges[1001] {};
bool visited[1001] {};

int dfs(int vertex, int cnt) {
    visited[vertex] = true;
    for(const int child : edges[vertex]) {
        if(!visited[child]) {
            return dfs(child, cnt + 1);
        }
    }
    return cnt;
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
    int result = dfs(1, 0);
    cout << result;
    return 0;
}