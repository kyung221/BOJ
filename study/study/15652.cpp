//#include <iostream>
//#include <algorithm>
//using namespace std;
////1���� n���� �ѹ� ����ϸ� �� ����. check�迭 
////�տ��� �ٲٸ鼭 ���
//bool c[10]; int a[10];
//int cnt[10];//i�� � ����
//////�� m�ڸ��� �迭���� index
//////i+1���� ũ�ų� ������ 
//void go(int index, int start, int n, int m) {
//	if (index == m) {
//		for (int i = 0; i < m; i++)
//			cout << a[i] << " ";
//		cout << "\n";
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//	
//		a[index] = i; // ���� �ִ� �迭
//		go(index + 1, i, n, m); //�� ���� ��ġ 
//	}
//}
//
////index : ������� ���� �����ϴ� ��
////select : ��� �������
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
////	//���������� �����ϰ� ����ؾ��� 
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
