#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3], d ,ans = 0;
	for (int i=0; i<3; i++) {
		cin >> a[i];
	}
	sort(a, a+3);
	cin >> d;
	if (a[1]-a[0]<d) {
		ans += d+a[0]-a[1];
	}
	if (a[2]-a[1]<d) {
		ans += d+a[1]-a[2];
	}
	cout << ans << "\n";
}
