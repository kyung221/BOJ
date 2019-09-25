#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n, start, finish, m;
	vector<int> v[101];
	vector<bool> visited(101, 0);
	cin >> n >> start >> finish >> m;

	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		int p = q.front();
		q.pop();

		if (p == finish) break;

		for (int i = 0; i < v[p].size(); i++) {
			if (!visited[v[p][i]]) {
				visited[v[p][i]] = visited[p] + 1;
				q.push(v[p][i]);
			}
		}
	}
	if (visited[finish] != 0)cout << visited[finish] << '\n';
	else cout << -1 << '\n';
		 
}