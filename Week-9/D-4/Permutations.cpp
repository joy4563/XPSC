#include <iostream>
#include <vector>
using namespace std;

void printSequence(int n)
{
    if (n < 5)
    {
        if (n == 1)
            cout << 1 << endl;
        else if (n == 4)
            cout << "2 4 1 3" << endl;
        else
            cout
                << "NO SOLUTION" << endl;
        return;
    }

    vector<int> odds, evens;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            evens.push_back(i);
        }
        else
        {
            odds.push_back(i);
        }
    }

    for (int i = 0; i < odds.size(); ++i)
    {
        cout << odds[i] << " ";
    }
    for (int i = 0; i < evens.size(); ++i)
    {
        cout << evens[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    printSequence(n);

    return 0;
}
