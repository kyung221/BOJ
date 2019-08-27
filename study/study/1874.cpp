#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
	int n;
	vector<int> v;//������ ����
	stack<int> s;//������ ����� ���� stack
	vector<char> res;//+,-���
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	vector<int>::iterator it;
	it = v.begin();

	for (int i = 1; i <= n; i++) {
		s.push(i);//1���� stack�� push
		res.push_back('+');
		while (!s.empty()) {
			if (s.top() != *it) break;
			else {
				s.pop();//stack�� top�� ������ ������ pop
				res.push_back('-');
				it++;//pop�� ������ index ++ 
			}
		}
	}
	if (s.empty()) {
		for (int i = 0; i < res.size(); i++)
			cout << res[i] << "\n";
	}
	else
		cout << "NO\n";
}