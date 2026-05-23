class Solution {
public:
    double poww(double x, long long n)
    {
        if(n == 0)
            return 1;

        if(n % 2 == 0)
            return poww(x * x, n / 2);
        else
            return x * poww(x * x, n / 2);
    }

    double myPow(double x, int n) {
        long long N = n;

        if(N < 0)
        {
            x = 1 / x;
            N = -N;
        }

        return poww(x, N);
    }
};