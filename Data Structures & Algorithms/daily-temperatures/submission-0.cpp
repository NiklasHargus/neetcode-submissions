class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> result(temperatures.size(), 0);
        std::stack<std::pair<int, int>> stack{};

        for(int i = 0; i < temperatures.size(); i++){
            int t = temperatures[i];
            while(!stack.empty() && (t > stack.top().first)){
                auto [temp, index] = stack.top();
                stack.pop();
                result[index] = i - index;
            }
            stack.push({t,i});
        }
        return result;
    }
};
