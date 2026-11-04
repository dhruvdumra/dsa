class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        // pushes the maximum to the last by adjacent swaps

        int n = nums.size();
        
        // we go from back so we will have to subtract

        // first of all rounds we need to calculate
        for(int i = n-1; i>=1; i--){

            // then inner loop that will start from starting and go till the outer loop counter

            for(int j= 0; j<i; j ++){

                if(nums[j] > nums[j+1]){
                    swap(nums[j], nums[j+1]);

                }
            }
        }

        return nums;

    }
};
