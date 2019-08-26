//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#include<string.h>
//using namespace std;
//bool check[1001];
//vector<int> arr[1001];
//void dfs(int x) {
//	check[x] = true;
//	cout << x << " ";
//	for (int i = 0; i < arr[x].size(); i++) {
//		int y = arr[x][i];
//		if (check[y] == false) dfs(y);
//	}
//}//x에 방문
//
//void bfs(int start) {
//	queue<int> q;
//	memset(check, false, sizeof(check));//check 초기화
//	check[start] = true;
//	q.push(start);
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		cout << x << " ";
//		for (int i = 0; i < arr[x].size(); i++) {
//			int y = arr[x][i];
//			if (check[y] == false) {
//				check[y] = true; q.push(y);
//			}
//		}
//	}
//}
//int main() {
//	int N, M, V;
//	int a, b;
//	cin >> N >> M >> V;
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b;
//		arr[a].push_back(b);
//		arr[b].push_back(a);
//	}
//
//	for (int i = 0; i <= N; i++) {
//		sort(arr[i].begin(), arr[i].end());
//	}
//
//	dfs(V);
//	cout << "\n";
//	bfs(V);
//	cout << "\n";
//	return 0;
//}