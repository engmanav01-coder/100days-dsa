class Solution {
public:
    bool possible(vector<int>& bloomDay, int mid, int k, int m) {
        int mf = 0;
        int buq = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            if (bloomDay[i] <= mid) {
                mf++;

                if (mf == k) {
                    buq++;
                    mf = 0;
                }
            }
            else {
                mf = 0;
            }

            if (buq == m) {
                return true;
            }
        }

        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int st = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (possible(bloomDay, mid, k, m) == true) {
                ans = mid;
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }
};