#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int* array = new int[n];
    for(int i{ 0 }; i < n; i++) {
        cin >> array[i];
    }
    int max = 0;
    int count = 1;
    for(int i{ 0 }; i < n; i++) {
        if(i == 0 || array[i-1] >= array[i]) {
            max = (max < count) ? count : max;
            count = 1;
        } else {
            count++;
        }
    }
    if(count != 1) {
        max = (max < count) ? count : max;
    }
    cout << max << endl;
    delete[] array;
    return 0;
}