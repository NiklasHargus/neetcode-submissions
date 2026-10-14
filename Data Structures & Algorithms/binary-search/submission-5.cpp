class Solution {
public:

    int bs(std::vector<int>& nums, int left, int right, int target){
        if (left > right) return -1;
        int middle = left + (right - left) / 2;

        if (nums[middle] == target)
            return middle;

        if(nums[middle] > target)
            return bs(nums, left, middle-1, target);

        return bs(nums, middle+1, right, target);
    }

    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        return bs(nums, left, right, target);
    }
};
