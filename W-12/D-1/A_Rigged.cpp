#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n';
int main()
{
    long long count;

    cin >> count;
    for (ll i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];
        int f = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[0] && b[i] >= b[0])
            {
                f = 0;
                break;
            }
        }
        if (f)
            cout << a[0] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}