class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum =  0;
        int macsum = INT_MIN;
        for (int i  = 0;i<nums.size();i++){
            cursum += nums[i];
            macsum = max(cursum,macsum);
            if(cursum <0){
                cursum = 0;
            }
        }
        return macsum;
    }
};