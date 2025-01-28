#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {i, mp[target - nums[i]]};
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);

    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
