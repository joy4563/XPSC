#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s, count = 0;
    cin >> k >> s;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int rem = s - i - j;
            if (rem >= 0 && rem <= k)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}