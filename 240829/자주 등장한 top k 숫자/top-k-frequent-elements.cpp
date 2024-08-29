#include <iostream>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long arr[100000] {};
    unordered_map<long long, int> unMap;
    for(int i{ 0 }; i < n; i++) {
        cin >> arr[i];
        unMap[arr[i]]++;
    }
    map<int, vector<long long>, greater<int>> m;
    for(unordered_map<long long, int>::iterator it = unMap.begin(); it != unMap.end(); it++) {
        int value = it->second;
        if(value >= k) {
            m[value].push_back(it->first);
        }
    }

    for(map<int, vector<long long>, greater<int>>::iterator it = m.begin(); it != m.end(); it++) {
        sort(it->second.begin(), it->second.end(), greater<>());
        for(long long ele : it->second) {
            cout << ele << " ";
        }
    }

    return 0;
}