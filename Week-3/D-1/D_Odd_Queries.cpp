#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, q, a = 0;
        cin >> n >> q;
        vector<ll> v(n), sum(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
            a += v[j];
            sum[j] = a;
        }

        for (int j = 0; j < q; j++)
        {
            int l, r, k, remSum = 0;
            cin >> l >> r >> k;
            if (l == 1)
                remSum = sum[n - 1] - sum[r - 1];
            else
                remSum = sum[n - 1] - sum[r - 1] + sum[l - 2];

            int totalSum = (k * (r - l + 1) + remSum);
            if (totalSum % 2 == 0)
                no;
            else
                yes;
        }
    }

    return 0;
}