#include <bits/stdc++.h>
using namespace std;

int twins(int arr[], int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int coins = 0;
    int myvalue = 0;
    int twinvalue = totalSum;
    for (int i = 1; i < n; i++)
    {
        myvalue += arr[i];
        twinvalue -= arr[i];
        coins++;
        if (myvalue > twinvalue)
            break;
    }
    return coins;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << twins(arr, n) << endl;
}