class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int max_length = 0;

        std::unordered_set<char> uniqueChar{};

        while(right < s.size()){
            while(uniqueChar.contains(s[right])){
                uniqueChar.erase(s[left]);
                left++;
            }
            uniqueChar.insert(s[right]);
            int s = uniqueChar.size();
            max_length = std::max(max_length, s);
            right++;
        }


        return max_length;
    }
};
