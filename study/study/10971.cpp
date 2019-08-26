//#include <iostream>
//
//using namespace std;
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
//	int min = 9999999999999;
//	cin >> num;
//	
//	int arr[10][10];
//	int d[10];
//
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < num; j++) {
//			cin >> arr[i][j];
//		}
//		d[i] = i;
//	}
//	do {
//		bool ok = true;
//		int cost = 0;
//		for (int i = 0; i < num - 1; i++) {
//			if (arr[d[i]][d[i + 1]] == 0) ok = false;
//			else cost += arr[d[i]][d[i + 1]];
//		}
//		if (ok && arr[d[num-1]][d[0]] != 0) {
//			cost += arr[d[num-1]][d[0]];
//			if (min > cost) min = cost;
//		}
//		
//	} while (next_permutation(d,num));
//	cout << min << "\n";
//}