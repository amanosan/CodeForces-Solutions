#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ff first
#define ss second
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define pb push_back
#define mp make_pair
#define MOD 1000000007 // 1e9 + 7
#define ps(x, y) fixed << setprecision(y) << x

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

/*******************************************/

void solve()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	int count = 0;
	int temp = str[0];
	for (int i = 1; i < n; i++)
	{
		if (temp == str[i])
		{
			count++;
		}
		else
		{
			temp = str[i];
		}
	}
	cout << count << "\n";
}

int32_t main()
{
	solve();
	return 0;
}