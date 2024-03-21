#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int f = 0, s = 0;
    while (s < n)
    {
        while (f < m && a[f] < b[s])
            f++;

        cout << f << " ";
        s++;
    }

    return 0;
}