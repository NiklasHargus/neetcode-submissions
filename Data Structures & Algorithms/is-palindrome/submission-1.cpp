class Solution {
public:
    bool isPalindrome(string s) {
    if(s.empty()) return true;

    auto left = s.begin();
    auto right = --s.end();

    while(left < right){
        while(left < right && !std::isalnum(*left)) left++;
        while(left < right && !std::isalnum(*right)) right--;

        if(!((std::tolower(*left)) == std::tolower(*right))) return false;

        left++;
        right--;
    }
    return true;
    }
};
