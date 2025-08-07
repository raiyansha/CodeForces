#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int min_row = n, max_row = -1;
    int min_col = m, max_col = -1;


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '*') {
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }


    for (int i = min_row; i <= max_row; ++i) {
        for (int j = min_col; j <= max_col; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
