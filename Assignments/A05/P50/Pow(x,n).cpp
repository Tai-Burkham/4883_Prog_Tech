class Solution {
public:
    double myPow(double x, int n) {
        double powX;

        if (n == 0) 
        {
            return 1.0;
        } 
        else if (n == 1) 
        {
            return x;
        } 
        else if (n < 0) {
            x = 1 / x;
            n = abs(n);
        }

        powX = myPow(x, n / 2);
        if (n % 2 == 0) 
        {
            return powX * powX;
        } 
        else 
        {
            return x * powX * powX;
        }
    }
};
