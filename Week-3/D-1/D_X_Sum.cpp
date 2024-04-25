#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nl cout << endl;
ll v[200][200];

ll findSum(int j, int k, int n, int m)
{
    ll total = 0, tempj = j, tempk = k;
    while (tempj != -1 && tempk != -1 && tempj != n && tempk != m)
    {
        total += v[tempj][tempk];
        tempj--, tempk--;
    }
    tempj = j, tempk = k;
    while (tempj != -1 && tempk != -1 && tempj != n && tempk != m)
    {

        total += v[tempj][tempk];
        tempj--, tempk++;
    }
    tempj = j, tempk = k;

    while (tempj != -1 && tempk != -1 && tempj != n && tempk != m)
    {

        total += v[tempj][tempk];
        tempj++, tempk--;
    }
    tempj = j, tempk = k;

    while (tempj != -1 && tempk != -1 && tempj != n && tempk != m)
    {

        total += v[tempj][tempk];
        tempj++, tempk++;
    }
    return total - (3 * v[j][k]);
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, m;
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> v[j][k];
            }
        }
        vector<ll> sum;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                sum.push_back(findSum(j, k, n, m));
            }
        }
        sort(sum.begin(), sum.end(), greater<ll>());
        cout << sum[0] << endl;
    }

    return 0;
}