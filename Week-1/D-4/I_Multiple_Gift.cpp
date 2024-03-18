#include <bits/stdc++.h>
using namespace std;

int main()
{

    // sum={a(r^n-1)}/(r-1)
    long long x, y;
    cin >> x >> y;
    // cout << floor(log2((y + 1) / x) + 1);

    int i = 0;
    long long mul = x;
    while (mul<=y){
        mul = 2 * mul;
        i++;
    }
    cout << i;

    return 0;
}