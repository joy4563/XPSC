#include <iostream>
#include <vector>

using namespace std;

int findUniqueIndex(const vector<int> &nums)
{
    int n = nums.size();

    // Check the first element
    if (nums[0] != nums[1])
        return 0;

    // Check the last element
    if (nums[n - 1] != nums[n - 2])
        return n - 1;

    // Check the middle elements
    for (int i = 1; i < n - 1; ++i)
    {
        if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
        {
            return i;
        }
    }

    // If no unique element found, return -1 (or any other suitable value)
    return -1;
}

int main()
{
    vector<int> nums = {1, 2,1, 1, 1}; // Example array with one unique element
    int index = findUniqueIndex(nums);
    if (index != -1)
    {
        cout << "Index of the unique element: " << index << endl;
        cout << "Unique element value: " << nums[index] << endl;
    }
    else
    {
        cout << "No unique element found in the array." << endl;
    }
    return 0;
}
