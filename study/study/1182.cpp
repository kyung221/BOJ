//#include <iostream>
//using namespace std;
//int main() {
//	int N, S;
//	int ans = 0;
//	cin >> N >> S;
//	int *arr = new int[N];
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 1; i < (1 << N); i++) {
//		int sum = 0;
//		for (int k = 0; k < N; k++) {
//			if (i&(1 << k)) {
//				sum += arr[k];
//			}
//		}
//		if (sum == S) ans += 1;
//	}
//	cout << ans << "\n";
//}