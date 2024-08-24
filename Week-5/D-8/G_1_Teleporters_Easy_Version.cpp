#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n';

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        ll n, c, ans = 0, sum = 0;
        cin >> n >> c;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.pb(x + i + 1);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum > c)
                break;
            ans++;
        }

        cout << ans << " ";
        nl;
    }

    return 0;
}