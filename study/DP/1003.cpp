#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int c0[41] = { 1,0 }; //0의 개수
	int c1[41] = { 0,1 }; //1의 개수
	
	for (int i = 2; i <= 40; i++) {
		c0[i] = c0[i - 2] + c0[i - 1];
		c1[i] = c1[i - 2] + c1[i - 1];
	}
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		cout << c0[n] << " " << c1[n] << '\n';
	}

}