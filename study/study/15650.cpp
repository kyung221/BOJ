//#include <iostream>
//#include <algorithm>
//using namespace std;
////1���� N���� �ѹ� ����ϸ� �� ����. check�迭 
////�տ��� �ٲٸ鼭 ���
//bool c[10]; int a[10];
//
//////�� M�ڸ��� �迭���� index
//////i+1���� ũ�ų� ������ 
////void go(int index, int start, int n, int m) {
////	if (index == m) {
////		for (int i = 0; i < m; i++)
////			cout << a[i] << " ";
////		cout << "\n";
////		return;
////	}
////	for (int i = start; i <= n; i++) {
////	
////		a[index] = i; // ���� �ִ� �迭
////		go(index + 1, i+1, n, m); //�� ���� ��ġ 
////	}
////}
//
////index : ������� ���� �����ϴ� ��
////select : ��� �������
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
