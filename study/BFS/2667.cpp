#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;
int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };
int map[26][26];//map
int num[26][26];//단지번호
vector<int> home;
int n;

void bfs(int i, int j, int cnt) {
	queue < pair<int, int>> q;
	q.push(make_pair(i, j));
	num[i][j] = cnt;
	int res = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		//하,상,좌,우
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < n) {
				if (map[nx][ny] == 1 && num[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					num[nx][ny] = cnt;
					res++;
				}
			}
		}
	}
	home.push_back(res);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%1d", &map[i][j]);
	}

	int cnt = 0;//번호
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && num[i][j] == 0)
				bfs(i, j, ++cnt);
		}
	}

	sort(home.begin(), home.end());

	cout << cnt << '\n';
	for (int i = 0; i < home.size(); i++)
		cout << home[i] << '\n';

}