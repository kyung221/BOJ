#include <iostream>
using namespace std;

int main() {
	long long n;
	int mod = 15746;
	cin >> n;
	long long arr[1000001] = { 0,1,2 };
	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 2] + arr[i - 1]) % mod;
	}
	cout << arr[n] << '\n';
}

