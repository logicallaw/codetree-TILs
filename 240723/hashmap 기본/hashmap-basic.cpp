#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    unordered_map<int, int> m;
    while(n--) {
        string userInput;
        cin >> userInput;
        if(userInput == "add") {
            int k, v;
            cin >> k >> v;
            m[k] = v;
        } else if (userInput == "remove") {
            int k;
            cin >> k;
            m.erase(k);
        } else if (userInput == "find") {
            int k;
            cin >> k;
            if(m.find(k) != m.end()) {
                cout << m[k] << endl;
            } else {
                cout << "None" << endl;
            }
        }
    }
    return 0;
}