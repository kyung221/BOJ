#include <iostream>
#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
int MAX = 100001;
bool check[100001];//방문 표시
int dist[100001]; //목적지까지 거리

int main() {
	int n, k;
	cin >> n >> k;

	queue<int> q;
	check[n] = true;
	dist[n] = 0;
	q.push(n);

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now - 1 >= 0) {
			if (!check[now - 1]) {
				q.push(now - 1);
				check[now - 1] = true;
				dist[now - 1] = dist[now] + 1;
			}
		}

		if (now + 1 < MAX) {
			if (!check[now + 1]) {
				q.push(now + 1);
				check[now + 1] = true;
				dist[now + 1] = dist[now] + 1;

			}
		}

		if (now * 2 < MAX) {
			if (!check[now * 2]) {
				q.push(now * 2);
				check[now * 2] = true;
				dist[now * 2] = dist[now] + 1;
			}
		}
	}
	cout << dist[k] << '\n';

}