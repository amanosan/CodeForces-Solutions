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
#define mod 1000000007 // 1e9 + 7
#define ps(x, y) fixed << setprecision(y) << x

void solve()
{
    return;
}

void display(vi arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int index = 0;

        while (index < n - 1 && k > 0)
        {
            if (arr[index] > 0)
            {
                k--;
                arr[index]--;
                arr[n - 1]++;
            }
            else
            {
                index++;
            }
        }
        display(arr);
    }
    return 0;
}