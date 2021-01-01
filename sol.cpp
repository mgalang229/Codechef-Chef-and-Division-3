#include <bits/stdc++.h>

using namespace std;

// algorithm for returning minimum value with long long data type
long long min(long long sum, int d) {
	return (sum < d ? sum : d);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k, d;
		cin >> n >> k >> d;
		long long sum = 0;
		// get the sum of all the problems and divide by 'k' to get the number of contests (days), 
		// since one contest can only be hosted per day
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			sum += a;
		}
		// check the minimum value between the contests available and the total days
		cout << min(sum / k, d) << '\n';
	}
	return 0;	
}
