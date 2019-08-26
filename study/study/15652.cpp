//#include <iostream>
//#include <algorithm>
//using namespace std;
////1부터 n까지 한번 사용하면 또 안함. check배열 
////앞에꺼 바꾸면서 재귀
//bool c[10]; int a[10];
//int cnt[10];//i를 몇개 선택
//////총 m자리의 배열에서 index
//////i+1보다 크거나 작은수 
//void go(int index, int start, int n, int m) {
//	if (index == m) {
//		for (int i = 0; i < m; i++)
//			cout << a[i] << " ";
//		cout << "\n";
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//	
//		a[index] = i; // 정답 넣는 배열
//		go(index + 1, i, n, m); //그 다음 위치 
//	}
//}
//
////index : 사용할지 말지 결정하는 수
////select : 몇개를 골랐는지
////void go(int index, int selected, int n, int m) {
////	if (selected == m) {
////		for (int i = 1; i <= n; i++) {
////			for (int j = 1; j <= cnt[i]; j++) {
////				cout << i << ' ';
////			}
////		}
////		cout << "\n";
////		return;
////	}
////	if (index > n) return;
////	//사전순으로 증가하게 출력해야함 
////	for (int i = m - selected; i >= 1; i--) {
////		cnt[index] = i;
////		go(index + 1, selected + i, n, m);
////	}
////}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	go(0, 1, n, m);
//}
//
