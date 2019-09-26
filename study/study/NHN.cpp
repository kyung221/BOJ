#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//string res[100][100]; //결과 배열
vector<vector<string>> res(100);
int main() {
	int n;//정사각형 크기
	int rotate; //회전 +면 시계, -면 반시계
	cin >> n >> rotate;
	int flag = rotate > 0 ? 1 : -1; // 1면 시계, 0 면 반시계
	rotate = abs(rotate);
	vector<vector<string>> mat;//행렬
	int size = n;
	for (int i = 0; i < n; i++) {
		vector<string> ele(n);
		for (int j = 0; j < n; j++) {
			cin >> ele[j];
		}
		mat.push_back(ele);
	}
	res = mat;
	int start = 0; // 처음 기준 

	while (n > 1) {
		int kan = (n - 1) * 4; // 칸 수 (둘레)
		int rcnt = rotate % kan; //움직이는 회전 수
		string tmp, tmp2;
		for (int k = 0; k < rcnt; k++) {

			if (flag == 1) {
				tmp = mat[start][start];
				for (int i = start; i < size - 1 - start; i++) {
					tmp2 = mat[start][i + 1];
					mat[start][i + 1] = tmp;
					tmp = tmp2;
				}
				for (int i = start; i < size - 1 - start; i++) {
					tmp2 = mat[i + 1][size - 1 - start];
					mat[i + 1][size - 1 - start] = tmp;
					tmp = tmp2;
				}
				for (int i = size - 1 - start; i > start; i--) {
					tmp2 = mat[size - 1 - start][i - 1];
					mat[size - 1 - start][i - 1] = tmp;
					tmp = tmp2;
				}
				//하상
				for (int i = size - 1 - start; i > start; i--) {
					tmp2 = mat[i - 1][start];
					mat[i - 1][start] = tmp;
					tmp = tmp2;
				}
			}

			else if (flag == -1) {

				tmp = mat[start][start];
				for (int i = start; i < size - 1 - start; i++) {
					tmp2 = mat[i + 1][start];
					mat[i + 1][start] = tmp;
					tmp = tmp2;
				}
				for (int i = start; i < size - 1 - start; i++) {
					tmp2 = mat[size - 1 - start][i + 1];
					mat[size - 1 - start][i + 1] = tmp;
					tmp = tmp2;

				}
				for (int i = size - 1 - start; i > start; i--) {
					tmp2 = mat[i - 1][size - 1 - start];
					mat[i - 1][size - 1 - start] = tmp;
					tmp = tmp2;
				}
				for (int i = size - 1 - start; i > start; i--) {
					tmp2 = mat[start][i - 1];
					mat[start][i - 1] = tmp;
					tmp = tmp2;
				}

			}
		}
		flag *= -1;
		start++;
		n -= 2;
	}
	cout << '\n';
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) cout << mat[i][j] << " ";
		cout << '\n';
	}
	return 0;
}