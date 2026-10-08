class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int m = (l+r)/2;

        while(l <= r){
            // middle = (left+right)/2;
            //m = l+(-l+r)/2;
            m = (l+r)/2;

            if (nums[m] == target) return m;

            if (nums[m] > target) {
                r = m - 1;
            } else if (nums[m] < target) {
                l = m + 1;
            } 

           // if (nums[middle] == target) return middle;
            //if (nums[middle] < target){
             //   left = middle -1;
            //}
            ///else {
              //  right = middle +1;
           // }
        }
        return -1;
    }
};
