#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n';

int main()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> v(n);
    for (ll t = 0; t < n; t++)
    {
        cin >> v[t];
    }
    for (ll t = 1; t < n; t++)
    {
        if (v[t] < v[t - 1])
        {
            ans += (v[t - 1] - v[t]);
            v[t] = v[t - 1];
        }
    }
    cout << ans << endl;

    return 0;
}