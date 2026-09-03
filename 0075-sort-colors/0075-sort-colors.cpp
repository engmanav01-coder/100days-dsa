class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low = 0;
        int hig = arr.size()-1;
        int mid = 0;
        while(mid<=hig){
            if(arr[mid] == 0){
                swap(arr[low],arr[mid]);
                low ++;

                mid++;
                // swap(arr[low],arr[mid]);
            }
            else if(arr[mid]==1){
                mid++;  
            }
            else{
                // high--;
                swap(arr[mid],arr[hig]);
                hig--;
            }
        }
    }
};