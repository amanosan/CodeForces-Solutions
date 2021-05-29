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
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, z1;
        cin >> x1 >> y1 >> z1;
        x += x1;
        y += y1;
        z += z1;
    }

    if (x == 0 and y == 0 and z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
    solve();
    return 0;
}