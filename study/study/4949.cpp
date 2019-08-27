#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string input;

	while (1) {
		stack<char> st;
		bool flag = true;

		getline(cin, input);
		if (input == ".") break;

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(')
				st.push(input[i]);
			else if (input[i] == '[')
				st.push(input[i]);
			else if (input[i] == ')') {
				if (!st.empty() && st.top() == '(')
					st.pop();
				else {
					flag = false;
					break;
				}
			}
			else if (input[i] == ']') {
				if (!st.empty() && st.top() == '[')
					st.pop();
					
				else {
					flag = false;
					break;
				}
			}
		}
		if (st.empty() && flag) cout << "yes" << "\n";
		else cout << "no" << "\n";
			
	}
}