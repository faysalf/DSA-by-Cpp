//dp ta beshi karjokor jokhon ek e kaje ekadhikbar recursion call hoy. Ex- fibonacchi
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int dpSave[55];

int getFacto(int n) {
	if (n==0) return 1;
	if (dpSave[n] != -1) return dpSave[n];	//dp = ek e jinis barbar na kora = save kore rakha
	dpSave[n] = n * getFacto(n-1);
	return dpSave[n];
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(dpSave, -1, sizeof dpSave);

	cout << getFacto(38) << '\n';

	return 0;
}