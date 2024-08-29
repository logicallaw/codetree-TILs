#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    long long arr[1000] {};
    unordered_map<long long, int> map;
    for(int i{ 0 }; i < n; i++) {
        cin >> arr[i];
    }

    int result = 0;
    for(int i{ 0 }; i < n; i++) {
        for(int j{ 0 }; j < i; j++) {
            long long diff = k - (arr[i] + arr[j]);
            result += map[diff];
            map[arr[i] + arr[j]]++;
        }
    }
    cout << result;

    return 0;
}