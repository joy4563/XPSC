#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 2; i++)
            cout << 2 << " ";
    }
    else
    {
        if (n == 3)
        {
            cout << 1 << endl;
            cout << 3 << endl;
        }
        else
        {
            cout << (n - 3) / 2 + 1 << endl;
            cout << 3 << " ";
            for (int i = 1; i <= (n - 3) / 2; i++)
                cout << 2 << " ";
        }
    }
    return 0;
}