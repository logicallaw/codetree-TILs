#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i{ 0 }; i < n; i++) {
        cin >> arr[i];
    }
    int duplicated = 1;
    int max = 0;
    for(int i{ 0 }; i < n; i++) {
        if(i == 0 || arr[i-1] != arr[i]) {
            max = (max < duplicated) ? duplicated : max;
            duplicated = 1;
        } else {
            duplicated++;
        }
    }
    cout << max << endl;
    delete[] arr;
    return 0;
}