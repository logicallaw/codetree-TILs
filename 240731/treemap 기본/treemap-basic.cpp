#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    map<int, int> m;
    while(n--) {
        string userInput;
        cin >> userInput;
        if(userInput == "add") {
            int k, v;
            cin >> k >> v;
            if(m.find(k) == m.end()) {
                m.insert({k, v});
            } else {
                m[k] = v;
            }
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
        } else if (userInput == "print_list") {
            if(m.empty()) {
                cout << "None" << endl;
            } else {
                map<int, int>::iterator it;
                for(it = m.begin(); it != m.end(); it++) {
                    cout << it->second << " ";
                }
                cout << endl;
                
            }
        }
    }
}