#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	//0��1�� ������ ����
	vector<int> ind;
	int k = 3;//ī�� 3������
	
	for (int i = 0; i < k; i++) {
		ind.push_back(1);
	}

	//n��-k���� 0�߰�
	for (int i = 0; i < v.size() - k; i++) {
		ind.push_back(0);
	}

	sort(ind.begin(), ind.end());//����
	int max = 0;
	//����
	do {
		int tmp = 0;
		for (int i = 0; i < ind.size(); i++) {
			if (ind[i] == 1) {
				tmp += v[i];
			}
		}
		if (tmp > max && tmp <= m) max = tmp;
	} while (next_permutation(ind.begin(), ind.end()));

	cout << max << "\n";
}