#include <bits/stdc++.h>
using namespace std;

bool is_perfect_square(int x)
{
    if (x >= 0)
    {
        int s = sqrt(x);

        return (s * s == x);
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int flag = 0;
        for (auto x : arr)
        {
            if (!is_perfect_square(x))
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}