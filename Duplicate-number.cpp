#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans;

        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage:
    std::vector<int> nums = {1, 3, 4, 2, 2}; // Example input
    int duplicate = solution.findDuplicate(nums);

    std::cout << "The duplicate number is: " << duplicate << std::endl;

    return 0;
}
