class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> preSum(nums.size(), 1);

        for(int i = 1; i < preSum.size(); i++){
            preSum[i] = preSum[i-1] * nums[i-1];
        }

        std::vector<int> postSum(nums.size(), 1);
        for(int i = postSum.size()-2; i >= 0; i--){
            postSum[i] = postSum[i+1] * nums[i+1];
        }

        std::vector<int> result(nums.size(), 0);
        for(int i = 0; i < result.size(); i++){
            result[i] = preSum[i] * postSum[i];
        }
        
        return result;
    }
};
