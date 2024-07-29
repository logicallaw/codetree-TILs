#include <iostream>
#include <queue>
using namespace std;
int main(void) {
    priority_queue<int> pq;
    int n;
    cin >> n;
    while(n--) {
        string userInput;
        cin >> userInput;
        if(userInput == "push") {
            int x;
            cin >> x;
            pq.push(x);
        } else if (userInput == "pop") {
            cout << pq.top() << endl;
            pq.pop();
        } else if (userInput == "size") {
            cout << pq.size() << endl;
        } else if (userInput == "empty") {
            if(pq.empty()) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else if (userInput == "top") {
            cout << pq.top() << endl;
        }
    }
    return 0;
}