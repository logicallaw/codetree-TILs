#include <iostream>
using namespace std;
int min(int x, int y) { return (x <= y) ? x : y; }
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(min(a, b), c);
    return 0;
}