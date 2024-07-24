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
    cout << set.size();
    return 0;
}