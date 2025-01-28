#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
            int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans^=nums[i];
            ans^=i+1;
        }
        return ans;


    }
};
int main() {
    Solution solution;
    vector<int> nums = {3,0,1};
    
    int result = solution.missingNumber(nums);
    cout << "The missing number is: " << result << endl;
    
    return 0;
}
