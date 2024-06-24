class Solution
{
public:
    long long sumMatrix(long long n, long long q)
    {
        if (q > 2 * n || q == 1)
            return 0;

        if (q + 1 <= n)
            return q - 1;

        return 2 * n - q + 1;
    }
};