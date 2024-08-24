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
        ll a, n, b, s, rem;
        cin >> a >> b >> n >> s;

        int j = s / n;
        if (a >= j)
            rem = s - (j * n);
        else
            rem = s - (a * n);

        if (rem <= b)
            yes;
        else
            no;
    }

    return 0;
}