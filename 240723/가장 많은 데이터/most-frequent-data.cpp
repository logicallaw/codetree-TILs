#include <iostream>
    #include <unordered_map>
    using namespace std;

    int main() {
        // 여기에 코드를 작성해주세요.
        int n;
        cin >> n;
        unordered_map<string, int> m;
        for(int i{ 1 }; i <= n; i++) {
            string userInput;
            cin >> userInput;
            if(m.find(userInput) == m.end()) {
                m[userInput] = 1;
            } else {
                m[userInput] += 1;
            }
        }
        int max = 1;
        for(const pair<string, int>& p : m) {
            if(p.second > max) {
                max = p.second;
            }
        }
        cout << max;
        return 0;
    }