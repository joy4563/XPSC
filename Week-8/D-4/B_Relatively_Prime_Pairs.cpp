#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n';

int main()
{
    ll l, r, x;
    cin >> l >> r;
    x = ((r - l) + 1) / 2;
    yes;
    for (int i = 0; i < x; i++)
    {
        cout << l << " " << l + 1 << endl;
        l = l + 2;
    }

    return 0;
}