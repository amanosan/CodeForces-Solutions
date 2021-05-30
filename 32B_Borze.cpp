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
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
            cout << "0";
        else if (s[i] == '-' and s[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        else if (s[i] == '-' and s[i + 1] == '-')
        {
            cout << "2";
            i++;
        }
    }
    cout << "\n";
}

int32_t main()
{
    solve();
    return 0;
}