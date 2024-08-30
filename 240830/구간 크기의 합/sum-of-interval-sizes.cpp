#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<tuple<long long, int, int>> v;
    for(int i{ 0 }; i < n; i++) {
        long long x1, x2;
        cin >> x1 >> x2;
        v.push_back(make_tuple(x1, +1, i));
        v.push_back(make_tuple(x2, -1, i));
    }
    long long result = 0;
    unordered_set<int> s;

    long long start = 1, end = 1;

    sort(v.begin(), v.end()); //오름차순
    for(auto p : v) {
        int w = get<1>(p);
        if(w == 1) {
            if(s.size() == 0) {
                start = get<0>(p);
            }
            s.insert({get<2>(p)});
        } else { // w == -1
            s.erase(get<2>(p));
            if(s.size() == 0) {
                end = get<0>(p);
                result += (end - start);
            }
        }
    }
    cout << result;
    return 0;
}
/*
6
1 5
4 7
3 6
9 13
8 15
12 16
 */