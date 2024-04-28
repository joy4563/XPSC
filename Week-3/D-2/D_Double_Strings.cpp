#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nl cout << endl;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        map<string, int> mp;
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
            mp[v[j]]++;
        }

        for (int j = 0; j < n; j++)
        {
            int sz = v[j].size(), flag = 0;
            for (int k = 1; k < sz; k++)
            {
                // cout << mp[v[j].substr(0, k)] << " = " << v[j].substr(k, sz - k) << endl;
                if (mp[v[j].substr(0, k)] && mp[v[j].substr(k , sz - k)])
                {
                    cout << 1;
                    flag = 1;
                    break;
                }
            }
            // nl;
            if (flag == 0)
                cout << 0;
        }
        nl;
    }

    return 0;
}