#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[j], nums[i]);
                i++;
            }
        }    
    }  
};

int main() {
    // Example usage:
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
