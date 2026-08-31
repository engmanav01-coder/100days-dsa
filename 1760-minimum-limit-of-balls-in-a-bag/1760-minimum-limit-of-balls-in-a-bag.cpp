class Solution {
public:
    bool possible(vector<int>& nums, int mid , int maxops){
        long long totalops = 0;
        for(int& val : nums){
            long long ops = (val-1) /mid;
            if(val % mid ==0){
                ops = val/mid;
                ops--;
            }
            totalops += ops;

        }
        if (totalops > maxops){
            return false;
        }
        else {
            return true;
        }
    }
    int minimumSize(vector<int>& nums, int maxops) {
        int st = 1;
        int end = *max_element(nums.begin(),nums.end());
        int ans = -1;
        while(st<=end){
            int mid = st + (end - st )/2;
            if(possible(nums, mid , maxops ) == true){
                ans = mid ;
                end = mid -1;

            }
            else{
                st = mid +1;
            }
        }
        return ans ;
    }

};