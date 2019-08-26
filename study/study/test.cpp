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
//	int prime[100];//소수 저장
//	int pn = 0;
//	bool check[101];
//	int n = 100;
//	//1부터 100까지 소수의 개수 
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