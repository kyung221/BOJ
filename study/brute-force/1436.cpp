#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	int num = 1;
	while (1) {
		int six = 0;
		int copy = num;
		while (copy) {
			if (copy % 10 == 6) six++;
			else if (six < 3) six = 0;
			copy /= 10;
		}
		if (six >= 3) cnt++;

		if (cnt == n) {
			cout << num << '\n';
			break;
		}
		num++;
	}
}