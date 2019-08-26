//#include <iostream>
//using namespace std;
////d[n]=d[n-1]+d[n-2]+d[n-3]
//int main() {
//	int*d = new int[100001];
//	d[0] = 0;
//	d[1] = 1;
//	d[2] = 2;
//	d[3] = 4;
//	int num, N;
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cin >> N;
//		for (int j = 4; j <= N; j++) {
//			d[j] = d[j - 1] + d[j - 2] + d[j - 3];
//		}
//		cout << d[N] << endl;
//	}
//	return 0;
//}