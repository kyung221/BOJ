//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//bool check[100];
//void bfs() {
//	queue<int> q;
//	check[1] = true;
//	q.push(1);
//	while (!q.empty()) {
//		int x = q.front(); q.pop();//현재 방문한 정점
//		cout << x << endl;
//		for (int i = 0; i <a[x].size(); i++) {//인점행렬 다음 정점 찾음 
//									//정점 개수만큼 다 찾아좀
//			int y = a[x][i];
//			if (check[y] == false) {
//				check[y] = true;
//				q.push(y);
//			}
//		}
//	}
//}