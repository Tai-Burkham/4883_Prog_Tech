// 1365. How Many Numbers Are Smaller Than the Current Number
// Tailor Burkham

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Vector ouput
        vector<int> smallerNums;
        
        // Iterate over each element in nums by index
        for(int i = 0; i < nums.size(); i++) {
            // count the number of valid j's
            int count = 0;
             
            for(int j = 0; j < nums.size(); j++) {
                // Compare numbers in the array to find smaller ones
                if(nums[i] > nums[j]) {
                    count++;
                }
            }
            // count the number of valid j's
            smallerNums.push_back(count);
        }
        // Return the answer in an array
        return smallerNums;
    }
};
