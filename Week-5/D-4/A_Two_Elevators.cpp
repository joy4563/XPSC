#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int a, b, c, f, s, t;
        cin >> a >> b >> c;

        f = abs(a - 1);
        s = abs(b - c) + c - 1;

        if (f < s)
            cout << "1" << endl;
        else if (f > s)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }

    return 0;
}