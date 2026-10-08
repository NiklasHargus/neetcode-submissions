class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        std::unordered_map<char, int> m_s{};
        std::unordered_map<char, int> m_t{};
        for(const auto & c: s){
            m_s[c]++;
        }
        for(const auto & c: t){
            m_t[c]++;
        }
        return m_s == m_t;
    }
};
