
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

        // Skip spaces
        while (s[i] == ' ') {
            i++;
        }

        // Check sign
        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        // Convert string to number
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            if (num * sign > INT_MAX)
                return INT_MAX;

            if (num * sign < INT_MIN)
                return INT_MIN;

            i++;
        }

        return num * sign;
    }
};
