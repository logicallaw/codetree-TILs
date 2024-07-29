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
        if(x == 0) {
            if(pq.empty()) {
                cout << 0 << endl;
            } else {
                int min = pq.top();
                cout << -min << endl;
                pq.pop();
            }
        } else {
            pq.push(-x);
        }
    }
}