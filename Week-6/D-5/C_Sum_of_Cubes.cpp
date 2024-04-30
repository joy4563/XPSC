#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a = 1, b, c, d, i = 1, k = 0;
        cin >> n;
        while (1)
        {
            a = i * i * i;
            if (a >= n)
                break;
            i++;
            b = n - a;
            c = cbrt(b);
            d = c * c * c;
            if (b == d)
            {
                k = 1;
                break;
            }
        }
        if (k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}