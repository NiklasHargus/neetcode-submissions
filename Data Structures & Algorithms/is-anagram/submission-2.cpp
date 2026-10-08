class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;


        std::array<int, 26> a{};


        for(const auto & c: s){
            a[c - 'a']++;
        }
        for(const auto & c: t){
            a[c - 'a']--;
        }
        return std::ranges::all_of(a, [](int x){return x==0;});
    }
};
