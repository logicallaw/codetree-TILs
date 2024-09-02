#include <iostream>
#include <vector>
using namespace std;

vector<int> nodes;
vector<int> graph[1001];
bool visited[1001] {};

int result = 0;

void dfs(int vertex, int cnt) {
    for(int i{ 0 }; i < graph[vertex].size(); i++) {
        int curr_v = graph[vertex][i];
        if(!visited[curr_v]) {
            visited[curr_v] = true;
            dfs(curr_v, cnt + 1);
        }
    }
    if(result < cnt) {
        result = cnt;
    }
}

int main(void) {
    int n, m;
    cin >> n >> m;
    for(int i{ 0 }; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int root_v = 1;
    visited[root_v] = true;
    dfs(root_v, 0);
    cout << result;
    return 0;
}