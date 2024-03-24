#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > 1)
                cnt++;

            // cout << it->first << " " << it->second << endl;
        }
        int ans = (mp.size() - cnt + (cnt / 2));
        cout << ((cnt % 2 == 0) ? ans+1 : ans - 1) << endl;

        // cout
        //     << mp.size() << " " << cnt << endl;
    }

    return 0;
}