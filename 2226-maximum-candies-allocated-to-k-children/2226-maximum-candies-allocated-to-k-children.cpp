
class Solution {
public:
   bool possible(vector<int>& can, long long k, int mid) {
    long long pl = 0;
    // long long sum = 0;
    for(int val : can) {
        pl += val / mid;
        
    }

    return pl >= k;
}
    int maximumCandies(vector<int>& can, long long k) {
        int st = 1;
        int ans = 0;
        int end = *max_element(can.begin(),can.end());
        while(st<=end){
           
            int mid = st + (end - st)/2;
            if(possible(can, k , mid)==true){
                ans = mid;
                st = mid +1;
            }
            else{
                end = mid - 1;

            }
        }
        return ans;
    }
};