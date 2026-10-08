class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;


        std::array<int, 26> a_s{};
        std::array<int, 26> a_t{};


        for(const auto & c: s){
            a_s[c - 'a']++;
        }
        for(const auto & c: t){
            a_t[c - 'a']++;
        }
        return a_s == a_t;
    }
};
