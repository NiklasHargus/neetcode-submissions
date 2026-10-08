class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        // holds number, count
        std::unordered_map<int, int> letter_counter{};

        for(int i = 0; i<s.size(); i++){
            letter_counter[s[i]]++;
            letter_counter[t[i]]--;
        }

        for(const auto& [number, count]: letter_counter){
            if (count != 0) return false;
        }
        return true;
    }
};
