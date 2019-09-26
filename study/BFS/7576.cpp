#include <iostream>
#include <queue>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
	int tmt[1000][1000];
	int dx[] = { 0,0,-1,1 };
	int dy[] = { 1,-1,0,0 };
	int m, n;
	queue<pair<int, int>> q;

	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tmt[i][j];
			if (tmt[i][j] == 1) {
				q.push(make_pair(i, j));
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (tmt[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					tmt[nx][ny] = tmt[x][y] + 1;
				}
			}
		}
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!tmt[i][j]) { //값이 0이면 방문하지 않은 것
				cout << -1 << '\n';
				return 0;
			}
			res = max(res, tmt[i][j]);
		}
	}
	cout << res - 1 << '\n';
}