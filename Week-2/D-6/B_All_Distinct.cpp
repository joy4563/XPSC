#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, m = 0;
        cin >> n;
        map<int, int> mp;
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;

            mp[x]++;
        }

        for (auto va : mp)
        {
            m += va.second - 1;
        }
        if (m % 2)
            m++;
        cout << n - m << endl;
    }

    return 0;
}