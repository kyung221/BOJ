#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string board[50];
string white[8] = {
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"}
};
string black[8] = {
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"}
};
int cnt(int x, int y) {
	int white_first = 0;
	int black_first = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if (board[i][j] != white[i - x][j - y]) white_first++;
			if (board[i][j] != black[i - x][j - y]) black_first++;
		}
	}
	return min(white_first, black_first);
}
int main() {
	int n, m;
	int res = 987654321;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	for (int i = 0; i+7 < n; i++) {
		for (int j = 0; j+7 < m; j++) {
			res = min(res, cnt(i, j));
		}
	}
	cout << res << '\n';
}