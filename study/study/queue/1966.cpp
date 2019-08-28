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
			q.push({ j,k });//index, �켱����
			pq.push(k); 
		}
		while (!q.empty()) {
			int idx = q.front().first;//���� index
			int pri = q.front().second;//���� index�� �켱����
			q.pop();

			if (pri == pq.top()) { 
				pq.pop();//�߿䵵�� ������ �ٷ� �μ�
				cnt++;//���°�� �μ�Ǵ��� count
				if (idx == m) break;
			}
			else {
				q.push({ idx, pri });//ť�� ���� �ڷ� ��ġ
			}
		}
		cout << cnt<<'\n';
	}
}