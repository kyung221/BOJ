//#include <iostream>
//using namespace std;
//bool c[10]; int a[10];
//
////�� M�ڸ��� �迭���� index
//void go(int index, int n, int m) {
//	if (index == m) {
//		for (int i = 0; i < m; i++)
//			cout << a[i]<<" ";
//		cout << "\n";
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		c[i] = true; 
//		a[index] = i; // ���� �ִ� �迭
//		go(index + 1, n, m); //�� ���� ��ġ 
//		c[i] = false; //index��ġ�� i�� �ְ� ��� ���� ����
//	}
//}
//int main() {
//	int n, m;
//	cin >> n >>  m;
//	go(0, n, m);
//}
