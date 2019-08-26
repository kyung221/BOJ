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
//bool pre_permutation(int *arr, int n) {
//	int i = n - 1;
//	while (i > 0 && arr[i - 1] <= arr[i]) i--;
//	if (i <= 0) return false;
//	int j = n - 1;
//	while (j > 0 && arr[j] >= arr[i - 1])j--;
//	swap(arr[i - 1], arr[j]);
//	j = n - 1;
//	while (i < j) {
//		swap(arr[i], arr[j]);
//		i++; j--;
//	}
//	return true;
//}
//int main() {
//	int num;
//	cin >> num;
//	int *arr = new int[num];
//	for (int i = 0; i < num; i++) {
//		arr[i] = i + 1;
//		cout << i + 1 << " ";
//	}
//	cout << "\n"; //endlÀº ´À¸² 
//	while (next_permutation(arr, num) == true) {
//		for (int i = 0; i < num; i++) cout << arr[i] << " ";
//		cout << "\n";
//	} 
//
//}