class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> unique_numbers{};

        for(const auto& num: nums){
            if(unique_numbers.contains(num)) return true;
            unique_numbers.insert(num);
        }
        return false;
    }
};