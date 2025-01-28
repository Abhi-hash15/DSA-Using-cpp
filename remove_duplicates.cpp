#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                nums[j + 1] = nums[i];
                j++;
            }
        }
        return j + 1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5}; // Example input
    int newLength = solution.removeDuplicates(nums);
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    cout << "New length of the array: " << newLength << endl;
    return 0;
}
