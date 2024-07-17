#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int cnt = 10;
    while(n--) {
        while(cnt--) {
            cout << "*";
        }
        cout << endl;
        cnt = 10;
    }
    return 0;
}