#include <iostream>
#include <queue>
using namespace std;
int main(void) {
    priority_queue<int> pq;
    int n, m;
    cin >> n >> m;
    //O(nlogn)time
    for(int i{ 0 }; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    //O(nlogn)time
    for(int i{ 0 }; i < m; i++) {
        int temp = pq.top();
        pq.pop();
        pq.push(temp - 1);
    }
    cout << pq.top();
    return 0;
}