// 1523. Count Odd Numbers in an Interval Range
// Tailor Burkham

class Solution {
public:
    int countOdds(int low, int high) {
        // Count odd numbers
        int count = 0;

        for (int i = low; i <= high; i++)
        {
            if(i % 2 == 1)
            {
                count++;
            }
        }

        // Return Count
        return count;
    }
};
