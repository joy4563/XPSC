#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    cout << floor(log2(y / x) + 1);

    return 0;
}