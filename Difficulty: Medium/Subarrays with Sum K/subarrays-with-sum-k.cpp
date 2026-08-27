class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> mpp; // hash map store karega [presum,cnt]
        mpp[0] = 1; // 0th presum ka cnt =1 hoga
        int presum =0;
        int cnt =0;
        for(int i =0; i<arr.size();i++){
            presum +=arr[i]; // presum me i ko add karte jao
            
            
            // heart of the logic ex, presum = 10 , k =6
            // to 10 - 6 =4
            // agar pehle kabhi presum 4 aya tha, to us prefix ke bad se current position tak 
            // ka subarray sum 6 hoga
            int remove = presum - k; 
            cnt += mpp[remove];// remove prefix ka pehle jitni baar aya hai utna cnt badhao
            mpp[presum] += 1; // current prefix sum ko map me store karo
        }
        return cnt;
    }
};