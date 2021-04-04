#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define MOD (int) 1e9+7
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)

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

#define ll long long

void rough() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main()
{
	fast_io;
	rough();
	tc(t)
	{
		string s, s1 = "";
		cin >> s;
		int ar[26] = {0};

		for (int i = 0; i < s.length(); i++)
		{
			int ch = s[i] - 'a';
			if (ar[ch] == 0)
			{
				ar[ch] = 1;
				s1 += s[i];
			}
		}
		cout << s1 << "\n";
	}
	return 0;
}

















