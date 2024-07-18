#include <iostream>
using namespace std;
void printRect(int row, int col) {
    while(row--){
        int cnt = col;
        while(cnt--){
            cout << 1;
        }
        cout << endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    printRect(n, m);
    return 0;
}