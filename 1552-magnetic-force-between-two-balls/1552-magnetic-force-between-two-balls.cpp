class Solution {
public:
    bool possible(vector<int>& ps , int mindist ,int n){
        int count = 1;
        int last = ps[0];
        for(int i = 1;i<ps.size();i++){
            if(ps[i]-last>=mindist){
                count ++;
                last = ps[i];
            }
            if(count == n){
                return true;

            }
        }
        return false;
    }
    int maxDistance(vector<int>& ps, int m) {
        sort(ps.begin(),ps.end());
        int st = 1;
        int end = ps.back() - ps.front();
        int ans = -1;
        while(st<=end ){
            int mid = st + (end-st)/2;
            if (possible(ps, mid , m)){
                ans = mid;
                // end = mid -1;
                st = mid +  1 ;
            

            }
            else{
                // mid = st + 1;
                end = mid -1;
            }

        }
        return ans;
    }
};