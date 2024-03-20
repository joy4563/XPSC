#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int f = 0, s = 0;
    while (f < n && s < m)
    {
        if (a[f] < b[s])
        {
            cout << a[f] << " ";
            f++;
        }
        else
        {
            cout << b[s] << " ";
            s++;
        }
    }
    while (f < n)
    {
        cout << a[f] << " ";
        f++;
    }
    while (s < m)
    {
        cout << b[s] << " ";
        s++;
    }

    return 0;
}