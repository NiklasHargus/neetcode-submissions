class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m{};

        for(const auto& num: nums){
            m[num]++;
        }

        using data = std::pair<int,int>;
        std::priority_queue<data, std::vector<data>, std::greater<data>> heap;
        for(const auto &[key, value] : m){
            heap.push({value,key});
            if(heap.size() > k){
                heap.pop();
            }
        }
        std::vector<int> result{};
        for(int i = 0; i < k ; i++){
            result.push_back(heap.top().second);
            heap.pop();
        }
        return result;
    }
};
