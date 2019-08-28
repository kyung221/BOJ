#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
	int n, k;
	queue < int> q;
	vector<int> v;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	//¿øÇü Å¥¸¦ ¸¸µé¾î ÇØ°á
	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}

	cout << "<";
	for (int i = 0; i < n; i++) {
		cout << v[i];
		if (i != n - 1)cout << ", ";
	}
	cout << ">\n";
}
