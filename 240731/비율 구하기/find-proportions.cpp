#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    map<string, int> m;
    int copy_n = n;
    while(copy_n--) {
        string word;
        cin >> word;
        if(m.find(word) == m.end()) {
            m.insert({word, 1});
        } else {
            m[word] += 1;
        }
    }
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        printf("%s %.4f\n", it->first.c_str(), ((double)it->second / n) * 100.0);
    }
}