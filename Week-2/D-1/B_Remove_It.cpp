#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m != x)
            cout << m << " ";
    }

    return 0;
}