// LeetCode 67. Add Binary
// Tailor Burkham
class Solution {
public:
    string addBinary(string a, string b) {
        string binarySum;
        int carry = 0;
        int i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int aInt = (i >= 0) ? a[i] - '0' : 0;
            int bInt = (j >= 0) ? b[j] - '0' : 0;

            int sum = aInt + bInt + carry;
            carry = sum / 2;
            binarySum = char((sum % 2) + '0') + binarySum;
            i--;
            j--;
        }
        return binarySum;
    }
};
