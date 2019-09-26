#include <iostream>
#include <tuple>
#include <queue>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main() {
	int m, n, h;
	int tmt[100][100][100];
	int dx[] = { 0,0,-1,1,0,0 };
	int dy[] = { 1,-1,0,0,0,0 };
	int dz[] = { 0,0,0,0,1,-1 };

	queue<tuple<int, int, int>> q;

	cin >> m >> n >> h;
	int total = m * n * h;
	int cnt = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> tmt[j][k][i];
				if (tmt[j][k][i] == 1) q.push(make_tuple(j,k,i));
				if (tmt[j][k][i] == -1) total--;
			}
		}
	}
	int res = 0;

	while (!q.empty()) {
		int x = get<0>(q.front());
		int y = get<1>(q.front());
		int z = get<2>(q.front());
		q.pop();
		cnt++;
		for (int i = 0; i < 6; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < m && 0 <= nz && nz < h) {
				if (tmt[nx][ny][nz] == 0) {
					q.push({ nx,ny,nz });
					tmt[nx][ny][nz] = tmt[x][y][z] + 1;
					res = max(res, tmt[nx][ny][nz]);

				}
			}
		}
	}

	if (!res) cout << res << '\n';
	else if (cnt == total)
		cout << res - 1 << '\n';
	else cout << -1 << '\n';

}