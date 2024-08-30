#include <iostream>
#define MAX 1000000001
long long checked[MAX] {};
using namespace std;
int main(void) {
    int n;
    cin >> n;
    for(int i{ 0 }; i < n; i++) {
        long long x1, x2;
        cin >> x1 >> x2;
        checked[x1]++;
        checked[x2]--;
    }
    int sum_val = 0;
    int max = 1;
    for(long long ele : checked) {
        sum_val += ele;
        max = (max < sum_val) ? sum_val : max;
    }
    cout << max;
}