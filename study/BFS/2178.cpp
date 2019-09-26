#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int n, m;
int map[100][100]; //(0,0)이 시작점이라 생각. 문제는 (1,1)에서 (n.,m)
int visited[100][100];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

void bfs(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	visited[i][j] = true;

	int level = 0;
	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;
		if (x == n - 1 && y == m - 1) return;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];

			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (map[nx][ny] && !visited[nx][ny]) {
					q.push(make_pair(nx, ny));
					visited[nx][ny] = visited[x][y] + 1; //이전 방문한 곳에서 +1해서 거리 증가
				}
			}
		}
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf("%1d", &map[i][j]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] && !visited[i][j])
				bfs(i, j);
		}
	}
	cout << visited[n - 1][m - 1] << '\n';
}