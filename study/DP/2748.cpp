#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> fibo(n + 1, 0);
	fibo[1] = 1;
	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}
	cout << fibo[n] << "\n";

}