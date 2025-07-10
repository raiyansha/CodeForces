#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isBeautiful(int n) {
    string s = to_string(n);
    set<char> digits(s.begin(), s.end());
    return digits.size() == 4;
}

int main() {
    int n;
    cin >> n;
    ++n;
    while (!isBeautiful(n)) {
        ++n;
    }
    cout << n << endl;
    return 0;
}

