#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) 
		cin >> v[i];
	
	stack<int> s;
	vector<int> res(v.size(), -1);

	for (int i = 0; i < v.size(); i++) {
		while (!s.empty() && v[s.top()] < v[i]) {
			res[s.top()] = v[i];
			s.pop();
		}
		s.push(i);
	}

	for (int x : res) {
		cout << x << " ";
	}
}
/**
���� for�� - �ð��ʰ�
monotone stack - stack�� ���ҵ��� �������� Ȥ�� �������� ���·� ����
*/