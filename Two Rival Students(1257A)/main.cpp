#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        int distance = abs(a - b);
        int result = min(n - 1, distance + x);
        cout << result << endl;
    }
    return 0;
}
