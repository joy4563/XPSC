#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, cnt = 0, cnt2 = 0;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;
        replace(str1.begin(), str1.end(), 'B', 'G');
        replace(str2.begin(), str2.end(), 'B', 'G');

        if (str1 == str2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}