class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        return std::unordered_set<int>{nums.begin(), nums.end()}.size() < nums.size();
        std::unordered_set<int> unique_numbers{nums.begin(), nums.end()};
        if(unique_numbers.size() == nums.size()) return false;
        return true;

        for(const auto& num: nums){
            if(unique_numbers.contains(num)) return true;
            unique_numbers.insert(num);
        }
        return false;
    }
};