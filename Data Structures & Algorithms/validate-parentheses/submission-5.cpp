class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true;
        std::stack<char> q{};
        std::unordered_map<char, char> pairing{
            {'{', '}'},
            {'[', ']'},
            {'(', ')'},
        };
        for(const auto& c: s){
            if(pairing.contains(c)){
                q.push(c);
                continue;
            }

            if (q.empty()) return false;
            char last = q.top();
            if(pairing[last] == c){
                q.pop();
                continue;
            }
            return false;
        }
        return true ? q.empty() : false;
    }
};
