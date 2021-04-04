


#include <bits/stdc++.h>
using namespace std;




#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);

void rough() {
	fast_io
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
	string s = "";
	string sa = "", sd = "";
	cin >> s;
	int l = s.length();
	for (int i = 0; i < l; i++)
	{
		int a = s[i] - '0';
		if (a <= 9 && a >= 0)
			sd += s[i];
		else
			sa += s[i];
	}


	string sde = "", sdo = "";
	string sae = "", sao = "";

	for (int i = 0; i < sd.length(); i++)
	{
		int b = sd[i] - '0';
		if (b & 1)
			sdo += sd[i];
		else
			sde += sd[i];

	}

	for (int i = 0; i < sa.length(); i++)
	{
		int c = sa[i] - 'a';
		if (c & 1)
			sao += sa[i];
		else
			sae += sa[i];
	}

	sort(sde.begin(), sde.end());
	sort(sdo.begin(), sdo.end());
	sd = sdo + sde;



	sort(sae.begin(), sae.end());
	sort(sao.begin(), sao.end());
	sa = sao + sae;

	string ans = sa + sd;



	cout << ans << endl;





}

int main()
{
	fast_io
	rough();
	int t;
	cin >> t;
	while (t--)
	{
		solve();

	}
	return 0;

}













