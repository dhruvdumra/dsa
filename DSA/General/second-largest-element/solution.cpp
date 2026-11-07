class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int sLargest = INT_MIN;

        for (auto it : nums) {
            if (it > largest) {
                sLargest = largest;
                largest = it;
            }
            else if (it < largest && it > sLargest) {
                sLargest = it;
            }
        }

        if (sLargest == INT_MIN)
            return -1;

        return sLargest;
    }
};