#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = arr[i] % 2;
	}
	int one = count(arr, arr + n, 1);
	if (one > n - one) {
		for (int i = 0; i < n; i++) {
			if (!arr[i]) {
				cout << i + 1;
				break;
			}
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (arr[i]) {
				cout << i + 1;
				break;
			}
		}

	}
	return 0;
}
