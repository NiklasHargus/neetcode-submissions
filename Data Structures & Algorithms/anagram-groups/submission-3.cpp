class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<string>> id_mapping{};

        for(const auto& word: strs){
            std::string id = word;
            std::sort(id.begin(), id.end());
            id_mapping[id].push_back(word);
        }

        std::vector<std::vector<std::string>> result{};
        for(const auto& [id, word_group]: id_mapping){
            result.push_back(word_group);
        }
        return result;
    }
};
