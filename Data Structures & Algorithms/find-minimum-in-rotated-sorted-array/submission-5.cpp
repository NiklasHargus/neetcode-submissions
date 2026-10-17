class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        int res = nums[0];

        while(left <= right){

            if (nums[left] < nums[right]){
                res = std::min(res, nums[left]);
            }

            int middle = left + (right-left)/2;
            res = std::min(res, nums[middle]);

            if(nums[middle] >= nums[left]){
                left = middle+1;
                continue;
            }
            right = middle-1;
        }
        return res;
    }
};











