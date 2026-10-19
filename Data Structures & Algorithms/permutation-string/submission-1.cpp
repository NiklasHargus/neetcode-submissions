class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        std::unordered_map<char, int> permID{};
        for(const auto& c:s1){
            permID[c]++;
        }


        int right = s1.size()-1;
        int left = 0;
        std::unordered_map<char, int> windowID{};
        for(int i = 0; i < s1.size(); i++){
            windowID[s2[i]]++;
        }

        while(right < s2.size()){
            if(permID == windowID) return true;
            windowID[s2[left]]--;
            if(windowID[s2[left]] == 0){
                windowID.erase(s2[left]);
            }
            left++;

            right++;
            windowID[s2[right]]++;
        }
        return false;

        
    }
};
