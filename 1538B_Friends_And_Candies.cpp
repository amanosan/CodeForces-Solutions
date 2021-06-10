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
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % n != 0)
    {
        cout << "-1"
             << "\n";
        return;
    }
    else
    {
        int candies = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > candies)
                count++;
        }
    }
    cout << count << "\n";
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