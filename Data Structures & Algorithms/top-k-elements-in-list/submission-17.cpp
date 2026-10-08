class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // <number, count>
        std::unordered_map<int, int> occurance{};
        for(const auto& num: nums){
            occurance[num]++;
        }

        using data = std::pair<int, int>;
        auto cmp = [](data lhs, data rhs){ return true ? lhs.second > rhs.second : false;};
        std::priority_queue<data, std::vector<data>, decltype(cmp)> heap{cmp};
        
        for(const auto& pairing: occurance){
            heap.push(pairing);
            if(heap.size() > k) {
                heap.pop();
            }
        }

        std::vector<int> result{};
        for(int i = 0; heap.size(); i++){
            result.push_back(heap.top().first);
            heap.pop();
        }

        return result;
    }
};
