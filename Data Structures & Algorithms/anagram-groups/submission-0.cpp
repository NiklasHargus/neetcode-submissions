class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> m{};
        for(const auto &s: strs){
            std::string id{s};
            std::ranges::sort(id);
            m[id].push_back(s);
        }

        std::vector<std::vector<std::string>> result{};
        for(const auto &[key, value]: m){
            result.push_back(value);
        }
        
        return result;
    }
};
