class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
            // takes a element and places it in its corrent position
            // its kind of like buuble sort now that i realise it

            int n = nums.size();

            for(int i=1;i<n; i++){
                int key = nums[i]; //  the element we want to insert ig
                int j = i-1;     // left side element index

                while(j >= 0 && nums[j] > key){ // basicallt till the index goes to 0 and till left side elemt is greater than the element
                    nums[j+1] = nums[j]; // the index will be inserted by tthe left side element
                    j--; // we go to the previous index to check

                }

                nums[j+1] = key;
            }
            return nums;
    }       
           
};
