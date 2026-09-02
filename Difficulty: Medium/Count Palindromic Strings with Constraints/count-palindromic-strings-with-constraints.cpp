class Solution {
  public:
    int palindromicStrings(int n, int k) {
        const long long MOD = 1000000007LL;
        long long ways = 1;
        long long ans = 0;

        for (int len = 1; len <= n; ++len) {
            if (len % 2 == 1) {
                int pairs = len / 2;

                ans = (ans + ways * (k - pairs)) % MOD;
            } else {
                int pairs = len / 2;

                ways = (ways * (k - pairs + 1)) % MOD;

                ans = (ans + ways) % MOD;
            }
        }

        return (int)ans;
    }
};
/*Approach
  I use m to represent the number of mirrored pairs.

  For an even length 2m:

  I need to choose m different characters for the first half.

  The number of ways is:

  k × (k - 1) × (k - 2) × ...

  This is the permutation:

  P(k, m) = k! / (k - m)!

  For an odd length 2m + 1:

  I again choose m different characters for the first half.

  After choosing them, m characters are already used.

  The middle character can be any of the remaining k - m characters.

  So the number of ways is:

  P(k, m) × (k - m)

  I do not need to build the strings. I only calculate these counts.

  I maintain the current permutation value in ways.

  Initially, ways = 1, which represents choosing zero characters.

  Then I check every length from 1 to n.

  If the length is odd, I use the current ways and multiply it by the number of choices for the middle character.

  If the length is even, I first add one more character to the first half by updating ways.

  Because n <= 2 * k, I never need more than k mirrored pairs.

  I take the answer modulo 10^9 + 7 after every multiplication and addition.*/