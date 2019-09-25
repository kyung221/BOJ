#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
vector<int> comp[101];
bool check[101];

int bfs(int start) {
	int res = 0;
	queue<int> q;
	memset(check, false, sizeof(check));
	check[start] = true;
	q.push(start);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < comp[x].size(); i++) {
			int y = comp[x][i];
			if (!check[y]) {
				check[y] = true;
				q.push(y);
				res++;
			}
		}
	}
	return res;
}


int bfsAll(int n){
	int components = 0;
	for (int i = 0; i < n; i++) {
		bfs(i);
		components++;
	}
	return components;
}
int main() {
	int cnt;
	int line;
	cin >> cnt;
	cin >> line;

	int u, v;
	for (int i = 0; i < line; i++) {
		cin >> u >> v;
		comp[u].push_back(v);
		comp[v].push_back(u);
	}
	for (int i = 0; i <= cnt; i++) {
		sort(comp[i].begin(), comp[i].end());
	}
	cout<< bfs(1) << '\n';
}