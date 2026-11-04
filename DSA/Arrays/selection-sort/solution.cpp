class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {

         int n = nums.size();

          // outerloop for iterating till the 2nd last element cuz we have to sort till there only
         for(int i = 0; i<=n-2; i++) { 
            
           
             int mini = i; // considering first index to be minimum
             for(int j = i; j<=n-1; j++) {    // inner loop for iterating to find minimum
                if (nums[j] < nums[mini]){
                    mini = j;
                }
             }
             
             int temp = nums[mini]; // swap
             nums[mini] = nums[i];
             nums[i] = temp;
             
         }
         return nums;
    }
};
