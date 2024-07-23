#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> map;
    for(int i{ 1 }; i <= n; i++) {
        int temp;
        cin >> temp;
        if(map.find(temp) == map.end()) {
            map[temp] = 1;
        } else {
            map[temp] += 1;
        }
    }
    while(m--) {
        int x;
        cin >> x;
        if(map.find(x) != map.end()) {
            cout << map[x] << " ";
        } else {
            cout << 0 << " ";
        }
    }
    return 0;
}