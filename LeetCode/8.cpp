class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        int sign = 1;
        int res = 0;
        if (str.size() == 0) return 0;

        while (i < str.size() && str[i] == ' ')
            i++;

        if (i < str.size() && (str[i] == '+' || str[i] == '-'))
            sign = (str[i++] == '-') ? -1 : 1;

        while (i < str.size() && str[i] >= '0' && str[i] <= '9') {
            if (res > INT_MAX / 10 ||
                    (res == INT_MAX / 10 && str[i] - '0' > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            res = res * 10 + (str[i++] - '0');
        }
        return res * sign;
    }
};
