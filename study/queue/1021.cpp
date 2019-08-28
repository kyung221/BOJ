#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	deque<int> dq;

	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		int k;
		int index;
		cin >> k;
		for (int j = 0; j < dq.size(); j++) {
			if (k == dq[j]) index = j;
		}

		while (dq.front() != k) {
			if (index < dq.size()-index ) {
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
			else {
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
		}
		dq.pop_front();
	}

	cout << cnt << '\n';

}


