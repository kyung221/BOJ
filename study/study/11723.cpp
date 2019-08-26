//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	int M;
//	int S = 0;
//	cin >> M;
//	int num;
//	string opt;
//	for (int i = 0; i < M; i++) {
//		cin >> opt;
//		if (opt == "add") {
//	
//			cin >> num;
//			if (S&(1 << num) == 0) continue;
//			S = S | (1 << num);
//
//		}
//		else if (opt == "remove") {
//
//			cin >> num;
//			if (S&(1 << num) == 0) continue;
//			S = S & ~(1 << num);
//		}
//		else if (opt == "check") {
//			cin >> num;
//			if (S & (1 << num)) cout<< 1<<"\n";
//			else cout << 0 << "\n";
//		}
//		else if (opt == "toggle") {
//			cin >> num;
//			S = S ^ (1 << num);
//
//		}
//		else if (opt == "all") {
//			for (int i = 1; i < 21; i++) {
//				S += (1 << i);
//			}
//		}
//		else if (opt == "empty") {
//			S = 0;
//		}
//	}
//}