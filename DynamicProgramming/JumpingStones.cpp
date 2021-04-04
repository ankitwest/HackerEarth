
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define MOD (int) 1e9+7

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)

#define ll long long

//#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define endl "\n"
#define ii pair<int, int>
#define vii vector<ii>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)




void rough() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4 + 17, mod = 1e9 + 7;
int n, k, dp[maxn];
int main() {
	fast_io
	rough();
	cin >> n >> k;
	dp[0] = 1;
	for (int i = 1; i < n; i++)
		for (int j = max(0, i - k); j < i; j++)
			(dp[i] += dp[j]) %= mod;
	cout << dp[n - 1] << '\n';
}

{	dp[i] += dp[j];
	dp[i] %= mod;
}

