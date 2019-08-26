//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool prime(int n) {
//	if (n < 2) return false;
//	for (int i = 2; i*i <= n; i++) {
//		if (n%i == 0) return false;
//	}
//	return true;
//}
//bool visit(int i, string numbers) {
//	bool flag = false;
//	vector<bool> visit(numbers.length());
//	while (i != 0) {
//		int temp = i % 10;
//		flag = false;
//		for (int j = 0; j <= numbers.length(); j++) {
//			if (temp == numbers[j] - '0' && visit[j] == 0) {
//				flag = true;
//				visit[j] = 1;
//				break;
//			}
//		}
//		if (flag == false)return false;
//		i = i / 10;
//	}
//	return true;
//}
//int solution(string numbers) {
//	int answer = 0;
//	int size = numbers.length();
//
//	sort(numbers.begin(), numbers.end(), greater<int>());
//	int num = stoi(numbers);
//	//cout << num << endl;
//	bool *check = new bool[num + 1];
//
//	//1부터 100까지 소수의 개수 
//	for (int i = 0; i < num + 1; i++) {
//				check[i] = false;
//	}
//	for (int i = 2; i<= num; i++){
//
//		if (check[i] == false && visit(i, numbers)) {
//			answer++;
//		}
//		if (check[i] == false) {
//			for (int j = i + i; j <= num; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	
//	return answer;
//}
//
//int main() {
//	cout << solution("110");
//}