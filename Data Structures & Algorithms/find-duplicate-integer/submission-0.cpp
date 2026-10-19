class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::unordered_set<int> sset{};

        for(auto num: nums){
            auto [_, suc] = sset.insert(num);
            if(!suc) return num;
        }
        
        
    }
};
