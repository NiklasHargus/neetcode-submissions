class Solution {
public:

    string encode(vector<string>& strs) {
        std::vector<int> sizes{};
        for(const auto& sstring: strs){
            sizes.push_back(sstring.size());
        }

        // "  5#abcde  "
        std::string payload{};
        for(int i = 0; i < strs.size(); i++){
            std::string msg = to_string(sizes[i]) + '#' + strs[i];
            payload.append(msg);
        }
        return payload;
    }


    // "  5#abcde ..."
    vector<string> decode(string s) {
        std::vector<string> result{};
        auto cur_char = s.begin();
        while(cur_char != s.end()){
            std::string msg_length{};
            while(*cur_char != '#'){
                msg_length += *cur_char;
                cur_char++;
            }
            cur_char++;
            int offset = stoi(msg_length);
            std::string sequence{cur_char, cur_char+offset};
            result.push_back(sequence);
            cur_char+=offset;
        }
        return result;
    }
};
