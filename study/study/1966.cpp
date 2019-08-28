#include <iostream>
#include <queue>
using namespace std;

int main() {
	int test;
	int n, m;
	
	cin >> test;
	for (int i = 0; i < test; i++) {
		int cnt = 0;
		cin >> n >> m;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int j = 0; j < n; j++) {
		   	int k;
			cin >> k;
			q.push({ j,k });//index, 우선순위
			pq.push(k); 
		}
		while (!q.empty()) {
			int idx = q.front().first;//현재 index
			int pri = q.front().second;//현재 index의 우선순위
			q.pop();

			if (pri == pq.top()) { 
				pq.pop();//중요도가 높으면 바로 인쇄
				cnt++;//몇번째로 인쇄되는지 count
				if (idx == m) break;
			}
			else {
				q.push({ idx, pri });//큐의 가장 뒤로 배치
			}
		}
		cout << cnt<<'\n';
	}
}