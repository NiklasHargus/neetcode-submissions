class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // <what, where>
        std::unordered_map<int, int> seen{};

       for(int i = 0; i < nums.size(); i++){
            int diff = target-nums[i];
            if (seen.contains(diff)) return {seen.at(diff), i};
            seen.insert({nums[i], i}) ;
       }
    }
};
