#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	int n, i = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n;i++) {
		v.push_back(n);

	}

	sort(v.begin(), v.end());

	if (1LL * v[n - 1] * v[n - 2] * v[n - 3] > 1LL * v[n - 1] * v[0] * v[1])
		cout << v[n - 1] << " " << v[n - 2] << " " << v[n - 3] << endl;
	else
		cout << v[n - 1] << " " << v[1] << " " << v[0] << endl;

	return 0;
}
