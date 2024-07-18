#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    cin >> n >> t;
    int* array = new int[n];
    for(int i{ 0 }; i < n; i++) {
        cin >> array[i];
    }
    int max = 0;
    int count = 0;
    for(int i{ 0 }; i < n; i++) {
        if(i == 0){
            if(array[0] > t) {
                count = 1;
            }
        } else if (array[i] <= t) {
            max = (max < count) ? count : max;
            count = 0;
        } else {
             count++;
        }

    }
    if(count != 0) {
        max = (max < count) ? count : max;
    }
    cout << max;
    delete[] array;
    return 0;
}