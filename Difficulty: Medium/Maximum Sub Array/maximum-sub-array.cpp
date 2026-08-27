class Solution {
public:
    vector<int> findSubarray(vector<int> &arr) {

        long long maxSum = -1, curSum = 0;

        vector<int> best, cur;

        for (int x : arr) {

            if (x >= 0) {
                cur.push_back(x);
                curSum += x;
            }
            else {

                if (curSum > maxSum ||
                   (curSum == maxSum && cur.size() > best.size())) {
                    maxSum = curSum;
                    best = cur;
                }

                cur.clear();
                curSum = 0;
            }
        }

        if (curSum > maxSum ||
           (curSum == maxSum && cur.size() > best.size())) {
            best = cur;
        }

        if (best.empty())
            return {-1};

        return best;
    }
};