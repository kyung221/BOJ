#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
bool visited[51][51] = { 0, };
int loc[51][51] = { 0, };
int m, n, k;
int dx[] = { 0, 0, 1, -1 };
int dy[] = { -1, 1, 0, 0 };

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int ax = x + dx[i];
		int ay = y + dy[i];

		if (ax < 0 || ay < 0 || ax >= m || ay >= n) continue;

		if (!loc[ax][ay] || visited[ax][ay]) continue;

		dfs(ax, ay);

	}
}



int main() {
	int t;//test case
	int x, y;

	cin >> t;
	while(t--) {
		cin >> m >> n >> k;

		for (int j = 0; j < k; j++) {
			cin >> x >> y;
			loc[x][y] = true;
		}
		int res = 0;
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (loc[i][j] && !visited[i][j]) {
					res++;
					dfs(i, j);
				}

			}
		}

		cout << res << '\n';
		memset(loc, 0, sizeof(loc));
		memset(visited, 0, sizeof(visited));
	}
}