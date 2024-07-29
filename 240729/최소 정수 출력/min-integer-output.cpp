#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    priority_queue<int,vector<int>, greater<int>> pq;
    for(int i{ 0 }; i < n; i++) {
        int x;
        cin >> x;
        if(x == 0) {
            if(pq.empty()) {
                printf("%d\n", 0);
            } else {
                int min = pq.top();
                printf("%d\n", min);
                pq.pop();
            }
        } else {
            pq.push(x);
        }
    }
}