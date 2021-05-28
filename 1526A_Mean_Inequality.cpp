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
    vi arr(2 * n);
    for (int i = 0; i < 2 * n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int first = 0, last = 2 * n - 1;

    for (int i = 0; i < n; i++)
    {
        cout << arr[first] << " " << arr[last] << " ";
        first++;
        last--;
    }
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