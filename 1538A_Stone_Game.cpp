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

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    int i1 = 0, i2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            i1 = i;
        else if (arr[i] == n)
            i2 = i;
    }
    if (i1 > i2)
        swap(i1, i2);

    int ans = min(i2 + 1, min(n - i1, i1 + 1 + (n - i2)));
    cout << ans << "\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}