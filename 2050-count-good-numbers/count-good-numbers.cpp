#define mod 1000000007
class Solution {
public:
    long long power(int x, long long n) {
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        long long ans = power(x, n / 2);
        if (n % 2 != 0) {
            return (ans * ans * x) % mod;
        }
        return (ans * ans) % mod;
    }

    int countGoodNumbers(long long n) {
        long long numberOfOddPlaces = n / 2;
        long long numberOfEvenPlaces = n / 2 + n % 2;
        return (power(5, numberOfEvenPlaces) * power(4, numberOfOddPlaces)) %
               mod;
    }
};