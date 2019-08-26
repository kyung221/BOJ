//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> arr[20001];
//int color[20001];//0 - 1 - 2
//void dfs(int start, int c) {
//	color[start] = c;
//	for (int i = 0; i < arr[start].size(); i++) {
//		int y = arr[start][i];
//		if (color[y] == 0) dfs(y, 3 -c);
//	}
//}
//int main() {
//	int K, V, E;
//	cin >> K;//케이스의 개수
//	while (K--) {
//		cin >> V >> E;//정점 V 간선 E
//		for (int i = 1; i <= V; i++) {
//			arr[i].clear();
//			color[i] = 0;
//		}
//		for (int i = 0; i < E; i++) {
//			int u, v;
//			cin >> u >> v;
//			arr[u].push_back(v);
//			arr[v].push_back(u);
//		}
//		for (int i = 1; i <= V; i++) {
//			if (color[i] == 0) dfs(i, 1);
//		}
//		bool ok = true;
//		for (int i = 1; i <= V; i++) {
//			for (int k = 0; k < arr[i].size(); k++) {
//				int j = arr[i][k];
//				if (color[i] == color[j]) ok = false;
//			}
//		}
//		if (ok) cout << "YES" << "\n";
//		else cout << "NO" << "\n";
//	}
//
//}