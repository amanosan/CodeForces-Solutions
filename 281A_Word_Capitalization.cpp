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
    string s;
    cin >> s;
    if (s[0] >= 64 and s[0] <= 90)
        cout << s << "\n";
    else
    {
        s[0] = char(s[0] - 32);
        cout << s << "\n";
    }
}

int32_t main()
{
    solve();
    return 0;
}