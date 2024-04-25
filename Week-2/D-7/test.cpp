#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> maxHeap;
    int num;

    for (int i = 0; i < N; i++)
    {
        cin >> num;

        maxHeap.push(num);

        while (maxHeap.size() > 3)
            maxHeap.pop();

        if (maxHeap.size() < 3)
        {
            cout << "-1" << endl;
        }
        else
        {
            long long product = 1;
            priority_queue<int, vector<int>, greater<int>> tempMaxHeap = maxHeap;

            for (int j = 0; j < 3; ++j)
            {
                product *= tempMaxHeap.top();
                cout << tempMaxHeap.top() << " ";
                tempMaxHeap.pop();
            }
            cout << product << endl;
        }
    }
    // while (!maxHeap.empty())
    // {
    //     cout << maxHeap.top() << endl;
    //     maxHeap.pop();
    // }

    return 0;
}