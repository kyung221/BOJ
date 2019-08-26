#include <iostream>
using namespace std;

int main() {
	int num, student;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int scores[1000];
		int sum = 0;
		int cnt = 0;
		cin >> student;
		for (int j = 0; j < student; j++) {
			cin >> scores[j];
			sum += scores[j];
		}
		double avg = (double)sum / student;

		for (int j = 0; j < student; j++) {
			if (scores[j] > avg) cnt++;
		}
		cout.precision(3);
		cout << fixed << (double)cnt / student * 100 << "%\n";
	}
}