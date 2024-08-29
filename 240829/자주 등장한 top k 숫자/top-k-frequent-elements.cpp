#include <iostream>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100000] {};
    unordered_map<int, int> unMap;
    for(int i{ 0 }; i < n; i++) {
        cin >> arr[i];
        unMap[arr[i]]++;
    }
    map<int, vector<int>, greater<int>> m;
    for(unordered_map<int, int>::iterator it = unMap.begin(); it != unMap.end(); it++) {
        int value = it->second;
        if(value >= k) {
            m[value].push_back(it->first);
        }
    }

    for(map<int, vector<int>, greater<int>>::iterator it = m.begin(); it != m.end(); it++) {
        sort(it->second.begin(), it->second.end(), greater<>());
        for(int ele : it->second) {
            cout << ele << " ";
        }
    }

    return 0;
}