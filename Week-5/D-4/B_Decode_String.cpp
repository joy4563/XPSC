#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test;
    string all = "abcdefghijklmnopqrstuvwxyz";
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        string str, ans;
        cin >> str;
       for (int j = n - 1; j >= 0; j--)
        {
            if (str[j] == '0')
            {

                ans += all[stoi(string(1, str[j - 2]) + string(1, str[j - 1])) - 1];
                j -= 2;
            }

            else
            {
                ans += all[int(str[j] - '0')-1];
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}