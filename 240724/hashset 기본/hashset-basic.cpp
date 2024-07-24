#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    unordered_set<int> map;
    while(n--) {
        string userInput;
        cin >> userInput;
        if(userInput == "add") {
            int x;
            cin >> x;
            if(map.find(x) == map.end()) {
                map.insert(x);
            }
        }
        else if (userInput == "remove") {
            int x;
            cin >> x;
            if(map.find(x) != map.end()) {
                map.erase(x);
            }
        }
        else if (userInput == "find") {
            int x;
            cin >> x;
            if(map.find(x) != map.end()) {
                cout << "true" << endl;
            } else {
                cout << "false" << endl;
            }
        }
    }
    return 0;
}