#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a>b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		int ans = (b-a)/10;
		if ((b-a)%10!=0) {
			ans++;
		}
		cout << ans << "\n";
	}
}
