#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> set;
    while(n--) {
        int x;
        cin >> x;
        if(set.find(x) == set.end()) {
            set.insert(x);
        }
    }
    int m;
    cin >> m;
    while(m--) {
        int x;
        cin >> x;
        if(set.find(x) != set.end()) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }
    return 0;
}