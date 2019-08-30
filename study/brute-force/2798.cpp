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

	//0과1을 저장할 벡터
	vector<int> ind;
	int k = 3;//카드 3개뽑음
	
	for (int i = 0; i < k; i++) {
		ind.push_back(1);
	}

	//n개-k개의 0추가
	for (int i = 0; i < v.size() - k; i++) {
		ind.push_back(0);
	}

	sort(ind.begin(), ind.end());//정렬
	int max = 0;
	//순열
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