#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//string res[100][100]; //��� �迭
vector<vector<string>> res(100);
int main() {
	int n;//���簢�� ũ��
	int rotate; //ȸ�� +�� �ð�, -�� �ݽð�
	cin >> n >> rotate;
	int flag = rotate > 0 ? 1 : -1; // 1�� �ð�, 0 �� �ݽð�
	rotate = abs(rotate);
	vector<vector<string>> mat;//���
	int size = n;
	for (int i = 0; i < n; i++) {
		vector<string> ele(n);
		for (int j = 0; j < n; j++) {
			cin >> ele[j];
		}
		mat.push_back(ele);
	}
	res = mat;
	int start = 0; // ó�� ���� 

	while (n > 1) {
		int kan = (n - 1) * 4; // ĭ �� (�ѷ�)
		int rcnt = rotate % kan; //�����̴� ȸ�� ��
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
				//�ϻ�
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