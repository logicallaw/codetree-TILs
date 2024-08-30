#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int checked[200001] {};
    for(int i{ 0 }; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        checked[x1]++;
        checked[x2]--;
    }
    int sum_val = 0;
    int max = checked[1];
    for(int& ele : checked) {
        sum_val += ele;
        max = (max < sum_val) ? sum_val : max;
    }
    cout << max;
    return 0;
}