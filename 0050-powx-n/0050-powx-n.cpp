class Solution {
    double power(double x, long num) {
        if (num == 0) {
            return 1;
        }
        if (num == 1) {
            return x;
        }
        double element = power(x, num / 2);
        if (num % 2 == 0) {

            return element * element;
        } else {

            return x * element * element;
        }
    }

public:
    double myPow(double x, int n) {
        long num = n;
        if (num < 0) {
            return (1.0 / power(x, -1 * num));
        }
        return power(x, num);
    }
};