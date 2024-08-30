#include <iostream>
using namespace std;

int n;
int arr[100] {};

int result = 0;

void dfs(int num, int i) {
    if(i == (n-2)) {
        if(num == arr[i+1]) {
            result++;
        }
        return;
    }
    int next = arr[i+1];
    if((num + next) >= 0 && (num + next) <= 20) {
        dfs(num + next, i + 1);
    }
    if((num - next) >= 0 && (num - next) <= 20) {
        dfs(num - next, i + 1);
    }
}
int main() {
    cin >> n;

    for(int i{ 0 }; i < n; i++) {
        cin >> arr[i];
    }
    dfs(arr[0], 0);
    long long answer = result % (1000000007);
    cout << answer;
    return 0;
}