#include <bits/stdc++.h>
using namespace std;

void validTMT(string s)
{
    int t = 0, m = 0;
    int count = 0;
    int n = s.size() - 1;
    // counting the number of ts and ms
    for (auto x : s)
    {
        if (x == 'T')
            t++;
        else
            m++;
    }

    // t should be twice than m
    if (t != m * 2)
    {
        cout << "NO" << endl;
        return;
    }

    // counting from beginning, if at any point count of m is bigger than t, we print NO
    for (auto x : s)
    {
        if (x == 'T')
            count++;
        else
            count--;
        if (count < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    // now checking for reverse of string too
    count = 0;
    for (int i = n; i >= 0; i--)
    {
        if (s[i] == 'T')
            count++;
        else
            count--;
        if (count < 0)
        {
            cout << "NO" << endl;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        validTMT(s);
    }
    return 0;
}