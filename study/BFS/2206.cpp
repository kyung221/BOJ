#include <iostream>
#include <queue>
#include <tuple>
#include <stdio.h>
using namespace std;

int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int map[1000][1000];
int check[1000][1000][2]; //0이면 벽X, 1이면 벽 부숨

int main() {

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf("%1d", &map[i][j]);
	}

	queue<tuple<int, int, int>> q;//행 열 벽
	check[0][0][0] = 1;
	q.push({ 0,0,0 });

	while (!q.empty()) {
		int x, y, z;
		tie(x, y, z) = q.front();
		q.pop();

		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (!map[nx][ny] && !check[nx][ny][z]) {
					check[nx][ny][z] = check[x][y][z] + 1;
					q.push({ nx,ny,z });
				}
				if (!z && map[nx][ny] && !check[nx][ny][z]) {
					check[nx][ny][z + 1] = check[x][y][z] + 1;
					q.push({ nx,ny,z + 1 });
				}
			}
		}
	}

	if (check[n - 1][m - 1][0] && check[n - 1][m - 1][1])
		cout << min(check[n - 1][m - 1][0], check[n - 1][m - 1][1]);
	else if (check[n - 1][m - 1][0])
		cout << check[n - 1][m - 1][0];
	else if (check[n - 1][m - 1][1])
		cout << check[n - 1][m - 1][1];
	else cout << -1;

	cout << '\n';
}