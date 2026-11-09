class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for (auto it : nums) {
            if (it != nums[index]) {
                    nums[index + 1] = it;
                    index ++; 
            }

            
        }

        return index + 1;
    }
};