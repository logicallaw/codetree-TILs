#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;
//void swap(int* x, int* y){
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
int main() {
    int n, m;
    cin >> n >> m;
    unordered_set<int> set[n + 1];
    int* array = new int[n + 1];
    array[0] = 0;
    for(int i{ 1 }; i <= n; i++) {
        array[i] = i;
        set[i].insert(i);
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
            if(set[x].find(bi) == set[x].end()) {
                set[x].insert(bi);
            }
            if(set[y].find(ai) == set[y].end()) {
                set[y].insert(ai);
            }
            swap(array[ai], array[bi]);
        }
    }
    for(int i{ 1 }; i <= n; i++) {
        cout << set[i].size() << endl;
    }
    for(int i{ 0 }; i < m; i++) {
        delete matrix[i];
    }
    delete[] matrix;
    delete[] array;
    return 0;
}