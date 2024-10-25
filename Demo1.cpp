#include <bits/stdc++.h>

using namespace std;

void rotate(vector<int> &nums, int k)
{
    int timesToRotate = k % nums.size();

    reverse(nums.begin(), nums.end());
    cout << "First: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << "First: ";
    reverse(nums.begin(), nums.begin() + timesToRotate);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << "First: ";
    reverse(nums.begin() + timesToRotate, nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    return 0;
}