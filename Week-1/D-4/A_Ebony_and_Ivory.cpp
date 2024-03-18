#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, target;
    cin >> a >> b >> target;
    int weight[2];
    weight[0] = a;
    weight[1] = b;

    int dp[2 + 1][target + 1];
    dp[0][0] = 1;

    for (int i = 1; i <= target; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if (weight[i - 1] <= j)
            {
                dp[i][j] = dp[i][j - weight[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[2][target] != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}