#include <iostream>
#include <algorithm>
#include <vector>
#define max 1000001
using namespace std;
vector<int> v;
int f(int n) {
	if (n == 1) return 0;
	if (v[n] != -1)return v[n];
	int res = f(n - 1) + 1;
	if (n % 3 == 0) res = min(res, f(n / 3) + 1);
	if (n % 2 == 0) res = min(res, f(n / 2) + 1);
	v[n] = res;
	return v[n];
}
int main() {
	int n;
	cin >> n;
	v.resize(max, -1);
	cout << f(n) << "\n";
}