#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t, ans = 0;

    cin >> a >> b >> t;
    for (int i = 1; t >= i * a; i++)
    {
        ans += b;
    }
    cout << ans << endl;

    return 0;
}