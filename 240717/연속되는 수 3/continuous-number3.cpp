#include <iostream>
using namespace std;
bool isSameNumber(const int& preN, const int& nextN) {
    if((preN > 0 && nextN > 0 )|| (preN < 0 && nextN < 0)) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int n;
    cin >> n;
    int* array = new int[n];
    for(int i{ 0 }; i < n; i++) {
        cin >> array[i];
    }
    int duplicated = 1;
    int max = 0;
    for(int i{ 0 }; i < n ;i++) {
        if(i == 0 || !isSameNumber(array[i-1], array[i])) {
            max = (max < duplicated) ? duplicated : max;
            duplicated = 1;
        } else {
            duplicated++;
        }
    }
    if(duplicated != 1) {
        max = (max < duplicated) ? duplicated : max;
    }
    cout << max << endl;
    delete[] array;
    return 0;
}