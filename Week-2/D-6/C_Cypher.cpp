#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        vector<int> last(n, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> last[j];
        }
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            string str;
            cin >> str;
            int val = last[j];
            for (auto ch : str)
            {
                if (ch == 'D')
                    val++;
                else
                    val--;
            }
            cout << ((val < 0) ? (10 + val) : (val % 10)) << " ";
            // cout << val << " "<< x << " " << str << endl;
        }
        cout << endl;
    }

    return 0;
}