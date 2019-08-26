//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//vector<int> stu;
//vector<int> first;
//vector<int> visited;
//
//int cnt;
//int dfs(int start, int current, int cnt) {
//	if (visited[current]) {
//		if (first[current] != start) return 0;
//
//		return cnt - visited[current];
//	}
//	first[current] = start;
//	visited[current] = cnt;
//	return dfs(start, stu[current], cnt + 1);
//}
//int main() {
//	int t, n;
//	int answer = 0;
//	cin >> t;
//	int num;
//	while(t>0) {
//		t--;
//		cin >> n;
//		stu = vector<int>(n + 1, 0);
//		first = vector<int>(n + 1, 0);
//		visited = vector<int>(n + 1, 0);
//		for (int i = 1; i <= n; i++) {
//		
//			cin >> stu[i];
//		}
//		answer = 0;
//		for (int i = 1; i <= n; i++) {
//			if (visited[i] == false) {
//				answer += dfs(i, i, 1);
//			}
//		}
//		cout << n - answer << "\n";
//		cnt = 0;
//	}
//
//}