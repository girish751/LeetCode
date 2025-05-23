class Solution {
    int power(int x, int y) {
        if (y == 0) {
            return 1;
        }
        return x * power(x, y - 1);
    }

public:
    bool isHappy(int n) {
        if (n == 1) {
            return true;
        }
        if (n == 4) {
            return false;
        }

        int sum = 0;
        while (n != 0) {
            int digit = n % 10;
            sum += power(digit, 2);
            n = n / 10;
        }
        return isHappy(sum);
    }
};
