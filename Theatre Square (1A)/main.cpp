#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long tilesLength = (n + a - 1) / a;
    long long tilesWidth = (m + a - 1) / a;

    cout << tilesLength * tilesWidth << endl;

    return 0;
}
