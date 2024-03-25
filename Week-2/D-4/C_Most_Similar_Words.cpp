#include <bits/stdc++.h>
using namespace std;

int findDiff(string str1, string str2)
{
    int n = str1.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += abs(int(str1[i] - 96) - int(str2[i] - 96));
    }
    return sum;
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, m, mn = INT16_MAX;
        cin >> n >> m;
        vector<string> v;

        for (int j = 0; j < n; j++)
        {
            string str;
            cin >> str;
            v.push_back(str);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int curDiff = findDiff(v[i], v[j]);
                mn = min(mn, curDiff);
            }
        }

        cout << mn << endl;
    }

    return 0;
}