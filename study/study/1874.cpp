#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
	int n;
	vector<int> v;//임의의 수열
	stack<int> s;//수열을 만들기 위한 stack
	vector<char> res;//+,-출력
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	vector<int>::iterator it;
	it = v.begin();

	for (int i = 1; i <= n; i++) {
		s.push(i);//1부터 stack에 push
		res.push_back('+');
		while (!s.empty()) {
			if (s.top() != *it) break;
			else {
				s.pop();//stack의 top이 수열과 같으면 pop
				res.push_back('-');
				it++;//pop후 수열의 index ++ 
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