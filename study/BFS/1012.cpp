#include <iostream>
#include <queue>
#include <string.h>

using namespace std;
int map[50][50];
bool visited[50][50];

int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int m, n;

void bfs(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	visited[i][j] = true;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < m && 0 <= ny && ny < n) {
				if (map[nx][ny] && !visited[nx][ny]) {
					q.push(make_pair(nx, ny));
					visited[nx][ny] = true;
				}
			}
		}
	}
}
int main() {
	int t;
	cin >> t;//test case
	int k;
	int x, y;

	while (t--) {
		cin >> m >> n >> k;// 배추밭 가로, 세로, 배추위치 개수

		while(k--){
			cin >> x >> y;
			map[x][y] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] && !visited[i][j]) {
					bfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << '\n';
		memset(map, 0, sizeof(map));
		memset(visited, 0, sizeof(visited));
	}
}