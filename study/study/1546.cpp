//#include <iostream>
//using namespace std;
//int main() {
//	int num, max = 0;
//	float total = 0;
//	float scores[1000];
//
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cin >> scores[i];
//		if (max < scores[i]) max = scores[i];
//	}
//	for (int i = 0; i < num; i++) {
//		scores[i] = scores[i] / max * 100;
//		total += scores[i];
//	}
//
//	cout << total / num << "\n";
//}