#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << 2 * a << endl;
    else
        cout << (max(a, b) * 2) - 1 << endl;

    return 0;
}