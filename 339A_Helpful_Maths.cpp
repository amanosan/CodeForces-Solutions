#include <bits/stdc++.h>
using namespace std;

string helpfulMaths(string str)
{
    string temp, result;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '+')
        {
            temp.push_back(str[i]);
        }
    }
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++)
    {
        result.push_back(temp[i]);
        result.push_back('+');
    }
    result.pop_back();
    return result;
}

// another solution
string helpfulMaths2(string str)
{
    string result;
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
            count1++;
        else if (str[i] == '2')
            count2++;
        else if (str[i] == '3')
            count3++;
        else
            continue;
    }
    for (int i = 0; i < count1; i++)
    {
        result.push_back('1');
        result.push_back('+');
    }
    for (int i = 0; i < count2; i++)
    {
        result.push_back('2');
        result.push_back('+');
    }
    for (int i = 0; i < count3; i++)
    {
        result.push_back('3');
        result.push_back('+');
    }
    result.pop_back();
    return result;
}

int main()
{
    string str;
    getline(cin, str);
    cout << helpfulMaths(str) << endl;
    return 0;
}