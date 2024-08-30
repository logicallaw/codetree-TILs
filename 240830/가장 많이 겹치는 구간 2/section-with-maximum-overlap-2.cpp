#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    long long checked[100001] {};
    for(int i{ 0 }; i < n; i++) {
        long long x1, x2;
        cin >> x1 >> x2;
        checked[x1]++;
        checked[x2]--;
    }
    long long sum_val = 0;
    int max = 1;
    for(long long ele : checked) {
        sum_val += ele;
        max = (max < sum_val) ? sum_val : max;
    }
    cout << max;
}