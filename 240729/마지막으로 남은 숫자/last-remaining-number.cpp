#include <iostream>
#include <queue>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    priority_queue<int> pq;
    for(int i{ 0 }; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    while(pq.size() >= 2) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        if(x == y) {
            continue;
        } else {
            int result = (x >= y) ? x - y : y - x;
            pq.push(result);
        }
    }
    if(pq.size() == 1) {
        cout << pq.top();
    } else {
        cout << -1;
    }
    return 0;
}