


#include <bits/stdc++.h>
using namespace std;


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
	fast_io
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main()
{
	fast_io
	rough();
	// solve();


	tc
	{

		int l;
		int A[l];

		cin >> l;
		for (int i = 0; i < l; i++)
		{
			cin >> A[i];

		}

		int ptr1 = 0, ptr2 = l - 1;
		vector<int> B;

		//2 pointers
		while (B.size() < l) {
			if (A[ptr1] <= A[ptr2]) {
				B.push_back(A[ptr1]);
				ptr1++;
			}
			else {
				B.push_back(A[ptr2]);
				ptr2--;
			}
		}
		string ans = "YES";

		for (int i = 0; i < l - 1; i++) {
			if (B[i + 1] < B[i]) {
				ans = "NO";
				break;
			}
		}
		cout << ans; LN

	}
	r0
}



#include <bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{

		int n;
		int A[n];

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];

		}

		int ptr1 = 0, ptr2 = n - 1;
		vector<int> B;

		//2 pointers
		while (B.size() < n) {
			if (A[ptr1] <= A[ptr2]) {
				B.push_back(A[ptr1]);
				ptr1++;
			}
			else {
				B.push_back(A[ptr2]);
				ptr2--;
			}
		}
		string ans = "YES";

		for (int i = 0; i < n - 1; i++) {
			if (B[i + 1] < B[i]) {
				ans = "NO";
				break;
			}
		}
		cout << ans << endl;

	}
	return 0;
}





Rohit

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int v[n], v1[n];
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int st = 0, ed = n - 1, i = 0;
		while (st <= ed) {
			if (v[st] > v[ed]) {
				v1[i] = v[ed];
				ed--;
				i++;
			}
			else {
				v1[i] = v[st];
				st++;
				i++;
			}
		}
		sort(v, v + n);
		int r = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == v1[i])
				r++;
			else
				break;
		}
		if (r == n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}



