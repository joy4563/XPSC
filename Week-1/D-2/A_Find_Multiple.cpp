#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, ans = -1;

    cin >> a >> b >> c;
    for (int i = 1; i * c <= b; i++)
    {
        if (i * c >= a && i * c <= b)
        {
            ans = i * c;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}