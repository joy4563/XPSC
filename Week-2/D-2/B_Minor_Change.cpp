#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int n = str1.size();

    int l = 0, r = 0;
    while (l < n)
    {
        if (str1[l] != str2[l])
            r++;
        l++;
    }
    cout << r << endl;

    return 0;
}