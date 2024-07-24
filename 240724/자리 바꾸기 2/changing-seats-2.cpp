#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int n, m;
    cin >> n >> m;
    unordered_set<int> map[n + 1];
    int* array = new int[n + 1];
    array[0] = 0;
    for(int i{ 1 }; i <= n; i++) {
        unordered_set<int>* ptr = new unordered_set<int>;
        ptr->insert(i);
        map[i].insert(i);
        array[i] = i;
    }
    int** matrix = new int*[m];
    for(int i{ 0 }; i < m; i++) {
        int a, b;
        cin >> a >> b;
        matrix[i] = new int[2]{a, b};
    }

    for(int i{ 1 }; i <= 3; i++) {
        for(int j { 0 }; j < m; j++) {
            int ai = matrix[j][0];
            int bi = matrix[j][1];
            int x = array[ai];
            int y = array[bi];
//            cout << "before:" << array[ai] << " " << array[bi] << endl;
            if(map[x].find(bi) == map[x].end()) {
//                cout << "map[" << x << "] new:" << bi  << endl;
                map[x].insert(bi);
            }
            if(map[y].find(ai) == map[y].end()) {
//                cout << "map[" << y << "] new:" << ai << endl;
                map[y].insert(ai);
            }
            swap(array[ai], array[bi]);
//            cout << "after:" << array[ai] << " " << array[bi] << endl;
        }
//        cout << "HI" << endl;
    }
    for(int i{ 1 }; i <= n; i++) {
        unordered_set<int> ptr = map[i];
        cout << ptr.size() << endl;
    }
    for(int i{ 0 }; i < m; i++) {
        delete matrix[i];
    }
    delete[] matrix;
    delete[] array;
    return 0;
}