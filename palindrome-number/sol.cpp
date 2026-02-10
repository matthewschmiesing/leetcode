class Solution {
public:
    bool isPalindrome(int x) {
        long long rev_x = 0;
        int org_x = x;
        while (x > 0) {
            rev_x = rev_x * 10 + x % 10;
            x = x / 10;
        }
        
        return rev_x == org_x;
    }
};