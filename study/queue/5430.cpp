#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

//R (뒤집기) - 배열에 있는 숫서를 뒤집는 함수
//D (버리기) - 배열의 첫번째 숫자 버리는 함수. 
// 배열이 비어있는데 사용하면 에러
//함수는 조합해서 사용가능 ex RDD

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		bool flag = true;
		bool isReverse = false;
		string cmd;
		cin >> cmd;

		int n;
		cin >> n;

		string arr;
		cin >> arr;

		deque<int> dq;
		if (n) {
			string tmp;
			for (int j = 0; j < arr.length(); j++) {
				if (arr[j] == '[') continue;
				else if (arr[j] >= '0' && arr[j] <= '9')
					tmp += arr[j];
				else if (arr[j] == ',' || arr[j] == ']') {
					dq.push_back(stoi(tmp));
					tmp.clear();
				}
			}
		}
		for (int j = 0; j < cmd.length(); j++) {
			if (cmd[j] == 'R') {
				isReverse = !isReverse;
			}
			else if (cmd[j] == 'D') {
				if (dq.empty()) {
					flag = false;
					cout << "error\n";
					break;
				}
				else {
					if (isReverse) dq.pop_back();
					else dq.pop_front();
				}
			}
		}
		if (flag) {
			cout << "[";

			if (isReverse) {
				for (auto j = dq.rbegin(); j != dq.rend(); j++) {
					cout << *j;
					if (j != dq.rend() - 1) cout << ",";
				}
			}
			else {
				for (auto j = dq.begin(); j != dq.end(); j++) {
					cout << *j;
					if (j != dq.end() - 1) cout << ",";
				}
			}
			cout << "]\n";

		}

	}
}