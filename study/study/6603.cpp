//#include <iostream>
//using namespace std;
//
//bool next_permutation(int *arr, int n) {
//	int i = n - 1;
//	while (i > 0 && arr[i - 1] >= arr[i]) i--;
//	if (i <= 0) return false;
//	int j = n - 1;
//	while (j > 0 && arr[j] <= arr[i-1])j--;
//	swap(arr[i-1], arr[j]);
//	j = n - 1;
//	while (i<j) {
//		swap(arr[i], arr[j]);
//		i++; j--;
//	}
//	return true;
//}
//int main() {
//	int num;
//	int lotto[13];
//	int tmp[13];
//	while (cin >> num && num) {
//		for (int i = 0; i < num; i++)
//			cin >> lotto[i];
//		for (int i = 0; i < 6; i++)
//			tmp[i] = 0;
//		for (int i = 6; i < num; i++)
//			tmp[i] = 1;
//
//		do {
//			for (int i = 0; i < num; i++) {
//				if (tmp[i] == 0) cout << lotto[i] << " ";
//			}
//			cout << "\n";
//		} while (next_permutation(tmp, num));
//		cout << "\n";
//	}
//}