class Solution {
public:
    int maxIndexDiff(vector<int>& arr) {

        int n = arr.size();

        // leftMin[i] = minimum element from index 0 to i
        vector<int> leftMin(n);

        // rightMax[i] = maximum element from index i to n-1
        vector<int> rightMax(n);

        // First element of leftMin is same as array's first element
        leftMin[0] = arr[0];

        // Build leftMin array
        for(int i = 1; i < n; i++) {

            // Store the smallest element seen so far
            leftMin[i] = min(leftMin[i - 1], arr[i]);
        }

        // Last element of rightMax is same as array's last element
        rightMax[n - 1] = arr[n - 1];

        // Build rightMax array from right to left
        for(int i = n - 2; i >= 0; i--) {

            // Store the largest element seen so far from right side
            rightMax[i] = max(rightMax[i + 1], arr[i]);
        }

        // Two pointers
        int i = 0;
        int j = 0;

        // Stores maximum value of (j - i)
        int ans = 0;

        while(i < n && j < n) {

            // If condition satisfies:
            // leftMin[i] <= rightMax[j]
            // then there exists some valid pair
            if(leftMin[i] <= rightMax[j]) {

                // Update maximum distance
                ans = max(ans, j - i);

                // Move j forward to try getting larger distance
                j++;
            }
            else {

                // Condition failed
                // Need a smaller left value, so move i forward
                i++;
            }
        }

        return ans;
    }
};