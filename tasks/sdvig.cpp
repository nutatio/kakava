#include <iostream>

using namespace std;
const long long int last = -2000000000;

int sign(int num) {
	if (num == 0)
		return 0;
	if (num > 0)
		return 1;
	if (num < 0)
		return -1;
}

int main() {
	
	int prev,cur;
	bool flag = true;
	cin >> prev;
	int count = 0;
	while (prev!=last) {
		cin >> cur;
		if (cur != last) {
			count |= 1 << sign(cur - prev) + 1;
		}
		prev = cur;
	}

	if (count == 0 || count == 2)
		cout << "CONSTANT";
	if (count == 5 || count == 7)
		cout << "RANDOM";
	if (count == 1)
		cout << "DESCENDING";
	if (count == 3)
		cout << "WEAKLY DESCENDING";
	if (count == 4)
		cout << "ASCENDING";
	if (count == 6)
		cout << "WEAKLY ASCENDING";

	return 0;
}
