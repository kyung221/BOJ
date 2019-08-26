//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> arr[1001];
//bool check[1001];
//
//void dfs(int start) {
//	check[start] = true;
//	for (int i = 0; i < arr[start].size(); i++) {
//		int y = arr[start][i];
//		if (check[y] == false) dfs(y);
//	}
//}
//int main() {
//	int N, M;
//	cin >> N >> M;
//	int a, b;
//	int cnt = 0;
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b;
//		arr[a].push_back(b);
//		arr[b].push_back(a);
//	}
//
//	for (int i = 1; i <= N; i++) {
//		if (check[i] == true) continue;
//		else {
//			cnt++;
//			dfs(i);
//		}
//	}
//	cout << cnt<< "\n";
//}