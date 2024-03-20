#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    int a[n], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int f = 0, s = 0, cnt = 0;
    while (f < m && s < n)
    {
        while (a[f] < b[s])
        {
            cnt++;
            f++;
        }
        cout << cnt << " ";
        s++;
    }
    while (s < n)
    {
        cout << cnt << " ";
        s++;
    }

    return 0;
}