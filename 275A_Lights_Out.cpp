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
    int arr[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int n;
            cin >> n;
            if (n % 2 == 0)
            {
                continue;
            }
            else
            {
                arr[i][j] = arr[i][j] ^ 1;
                if (i > 0)
                    arr[i - 1][j] = arr[i - 1][j] ^ 1;
                if (i < 2)
                    arr[i + 1][j] = arr[i + 1][j] ^ 1;
                if (j > 0)
                    arr[i][j - 1] = arr[i][j - 1] ^ 1;
                if (j < 2)
                    arr[i][j + 1] = arr[i][j + 1] ^ 1;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j];
        cout << "\n";
    }
}

int32_t main()
{
    solve();
    return 0;
}