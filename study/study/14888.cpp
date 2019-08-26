//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//
//	int num;
//	int arr[11];
//	int opt[10];//+ - * /
//	int max = -1000000000;
//	int min = 1000000000;
//	int k, l=0;
//	cin >> num;
//
//	for (int i = 0; i < num; i++)
//		cin >> arr[i];
//	for (int i = 0; i < 4; i++) {
//		cin >> k;
//		for (int j = 0; j < k; j++)
//			opt[l++] = i;
//	}
//	do {
//		int temp = arr[0];
//		for (int i = 0; i < l; i++) {
//			if (opt[i] == 0) temp += arr[i + 1];
//			if (opt[i] == 1) temp -= arr[i + 1];
//			if (opt[i] == 2) temp *= arr[i + 1];
//			if (opt[i] == 3) temp /= arr[i + 1];
//		}
//		max = max > temp? max:temp;
//		min = min > temp? temp:min;
//	} while (next_permutation(opt, opt + num - 1));
//
//	cout << max << "\n" << min <<"\n";
//	
//}