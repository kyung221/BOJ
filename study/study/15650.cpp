//#include <iostream>
//#include <algorithm>
//using namespace std;
////1부터 N까지 한번 사용하면 또 안함. check배열 
////앞에꺼 바꾸면서 재귀
//bool c[10]; int a[10];
//
//////총 M자리의 배열에서 index
//////i+1보다 크거나 작은수 
////void go(int index, int start, int n, int m) {
////	if (index == m) {
////		for (int i = 0; i < m; i++)
////			cout << a[i] << " ";
////		cout << "\n";
////		return;
////	}
////	for (int i = start; i <= n; i++) {
////	
////		a[index] = i; // 정답 넣는 배열
////		go(index + 1, i+1, n, m); //그 다음 위치 
////	}
////}
//
////index : 사용할지 말지 결정하는 수
////select : 몇개를 골랐는지
//void go(int index, int selected, int n, int m) {
//	if (selected == m) {
//		for (int i = 0; i < m; i++)
//				cout << a[i] << " ";
//		cout << "\n";
//		return;
//	}
//	if (index > n) return;
//	a[selected] = index;
//	go(index + 1, selected + 1, n, m);
//	a[selected] = 0;
//	go(index + 1, selected, n, m);
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	go(1, 0, n, m);
//}
//
