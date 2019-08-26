//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	string test;
//
//
//	int j;
//	for (int i = 0; i < n; i++) {
//		cin >> test;
//		stack<char> input;
//		string answer = "YES";
//		for (j = 0; j < test.length(); j++)
//		{
//			if (test[j] == '(') input.push('(');
//			else{
//				if (!input.empty()) {
//					input.pop();
//				}
//				else {
//					answer = "NO";
//					break;
//				}
//			}
//		}
//		if (!input.empty()) answer = "NO";
//		cout << answer << "\n";
//		test.clear();
//	}
//	
//	
//}