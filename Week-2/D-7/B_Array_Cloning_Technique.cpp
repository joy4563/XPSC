#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;

        map<ll, ll> mp;
        ll same = INT64_MIN;

        for (int j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            same = max(same, mp[x]);
        }

        ll s = n - same;
        while (same < n)
        {
            same *= 2;
            s++;
        }
        cout << s << endl;
    }

    return 0;
}
