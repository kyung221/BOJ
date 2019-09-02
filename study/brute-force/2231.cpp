#include <iostream>
using namespace std;
int cal(int num) {
	int creator = num;
	while (num != 0) {
		creator += num % 10;
		num /= 10;
	}
	return creator;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 1000000; i++) {
		
		if (cal(i) == n) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << 0 << '\n';
}