#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d, ans = 0;
	cin >> n >> d;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (abs(a[i]-a[j])<=d) {
				ans += 2;
			}
		}
	}
	cout << ans << "\n";
}
