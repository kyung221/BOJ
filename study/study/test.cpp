//#include <iostream>
//using namespace std;
//bool prime(int num) {
//	if (num < 2) return false;
//	for (int i = 2; i*i<=num;i++)
//	{	if(num%i==0)
//		return false;
//	}
//	return true;
//}
//int main() {
//	
//	int prime[100];//�Ҽ� ����
//	int pn = 0;
//	bool check[101];
//	int n = 100;
//	//1���� 100���� �Ҽ��� ���� 
//	for (int i = 0; i < 101; i++) {
//		check[i] = false;
//	}
//	for (int i = 2; i<= n; i++)
//	{
//		if (check[i] == false) {
//			prime[pn++] = i;
//			cout << i<<endl;
//			for (int j = i + i; j <= n; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	for (int i = 0; i < pn; i++)
//		cout<< prime[i]<<endl;
//}