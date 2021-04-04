#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >

#define prec(n) fixed<<setprecision(n)
#define ini(a, i) memset(a, i, sizeof(a))

#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <unordered_map>
#include <unordered_set>

#define scn(n) scanf("%d", &n)
#define lscn(n) scanf("%lld", &n)
#define pri(n) printf("%d ", (int)(n))
#define prin(n) printf("%d\n", (int)(n))
#define lpri(n) printf("%lld ", n)
#define lprin(n) printf("%lld\n", n)

#define rep(i, a, b) for(int i=(int)(a); i<(int)(b); i++)
#define tc int tt; scn(tt); while(tt --)
#define lcm(m,n)             (m*n)/__gcd(m,n)

const int inf = INT_MAX;
const int ninf = INT_MIN;
const long long int  mod = 1e9 + 7;
const int N = 2e5 + 2;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x)     x.begin(),x.end()

#define en  "\n"
#define LN cout<<"\n";
#define r0 return 0;

#define mod                    1000000007
#define pi                   3.14159265358979323846
#define ll                   long long
#define lldd                 long double
#define ld                   double
#define ull                  unsigned long long

#define pii                  pair<int, int>
#define pll                  pair<ll, ll>
#define vi                   vector<int>
#define vl                   vector<ll>
#define vpi                  vector<pii>
#define vpl                  vector<pll>

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);

void rough() {

#ifndef ONLINE_JUDGE
	freopen("inputg.txt", "r", stdin);
	freopen("outputg.txt", "w", stdout);
#endif
}



int main()
{
	rough();
	fast_io
	int n;
	scanf("%d", &n);
	long long int k;
	scanf("%lld", &k);
	pair<long long int, int> a[n];
	for (int i = 0; i < n; i++)
	{
		int b;
		long long int c;
		scanf("%d %lld", &b, &c);
		a[i] = make_pair(c, b);
	}
	sort(a, a + n);
	vl v;
	for (int i = 0; i < n; i++)
	{
		ll y = a[i].first;
		ll w = a[i].second;
		if (k >= y) {
			v.push_back(w);
			k -= y;
		}

	}
	ll z = v.size();
	if (z == 0)
		cout << "-1";
	else
	{
		sort(v.begin(), v.end());
		for (int i = 0; i < z - 1; i++) {
			cout << v[i] << ",";
		}
		cout << v[z - 1];
	}
	r0
}






