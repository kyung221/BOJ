//#include <iostream>
//using namespace std;
//bool c[10]; int a[10];
//
////총 M자리의 배열에서 index
//void go(int index, int n, int m) {
//	if (index == m) {
//		for (int i = 0; i < m; i++)
//			cout << a[i]<<" ";
//		cout << "\n";
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		c[i] = true; 
//		a[index] = i; // 정답 넣는 배열
//		go(index + 1, n, m); //그 다음 위치 
//		c[i] = false; //index위치에 i를 넣고 모든 수열 넣음
//	}
//}
//int main() {
//	int n, m;
//	cin >> n >>  m;
//	go(0, n, m);
//}
