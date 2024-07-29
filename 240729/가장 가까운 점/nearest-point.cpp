#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    for(int i{ 0 }; i < n; i++) {
        int x, y;
        cin >> x >> y;
        tuple<int, int, int> t = make_tuple(x + y, x, y);
        pq.push(t);
    }
    for(int i{ 0 }; i < m; i++) {
        tuple<int, int, int> t = pq.top();
        pq.pop();
        get<1>(t) += 2;
        get<2>(t) += 2;
        get<0>(t) = get<1>(t) + get<2>(t);
        pq.push(t);
    }
    tuple<int, int, int> t = pq.top();
    cout << get<1>(t) << " " << get<2>(t);
    return 0;
}