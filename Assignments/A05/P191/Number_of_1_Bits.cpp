// Tailor Burkham
class Solution {
public:
    int hammingWeight(int n) {
        // Convert Number to Binary
        string binary = "";
        while (n > 0) 
        {
            binary = to_string(n % 2) + binary;
            n /= 2;
        }
        int setBits = std::count(binary.begin(), binary.end(), '1'); 
        return setBits;
    }
};
