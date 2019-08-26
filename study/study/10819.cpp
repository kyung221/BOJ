//#include <iostream>
//#include <math.h>
//#include <algorithm>
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
//int calculate(int *arr, int num) {
//	int temp = 0;
//	for (int i = 0; i < num - 1; i++) {
//		temp += abs(arr[i] - arr[i + 1]);
//	}
//	return temp;
//}
//int main() {
//	int num, res=0;
//	cin >> num;
//	int *arr = new int[num];
//	for (int i = 0; i < num; i++) cin >> arr[i];
//	sort(arr, arr + num);
//	do {
//		int temp = calculate(arr, num);
//		res = max(res, temp);
//
//	} while (next_permutation(arr, num) == true);
//	cout << res << "\n";
//}