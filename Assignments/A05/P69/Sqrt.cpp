class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) 
        {
            return x;
        }
        int squareRT = 0;

        //  Long Division Method 
        while ((squareRT + 1) <= (x / (squareRT + 1))) 
        {
            squareRT++;
        }
        return squareRT;
    }
};
