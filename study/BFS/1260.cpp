#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
bool check[1001];
vector<int> arr[1001];
void dfs(int start) {
	check[start] = true;
	cout << start << " ";
	for (int i = 0; i < arr[start].size(); i++) {
		int y = arr[start][i];
		if (!check[y]) dfs(y);
	}
}
void bfs(int start) {
	queue<int> q;
	memset(check, false, sizeof(check));
	check[start] = true;
	q.push(start);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < arr[x].size(); i++) {
			int y = arr[x][i];
			if (!check[y]) {
				check[y] = true;
				q.push(y);
			}
		}
	}
}
int main() {
	int n, m, v;
	cin >> n >> m >> v;

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}

	for (int i = 0; i <= n; i++) {
		sort(arr[i].begin(), arr[i].end());
	}

	dfs(v);
	cout << '\n';
	bfs(v);
	cout << '\n';

}