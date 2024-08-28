#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    long long arr[100000] {};
    unordered_map<long long, int> map;
    for(int i{ 0 }; i < n; i++) {
        cin >> arr[i];
    }
    int result = 0;
    for(int i{ 0 }; i < n; i++) {
        long long diff = k - arr[i];
        result += map[diff];
        map[arr[i]]++;
    }
    cout << result;
    return 0;
}