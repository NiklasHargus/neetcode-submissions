class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set uniqueNumbers(nums.begin(), nums.end());
        // seq start, seq length
        std::unordered_map<int, int> sequenceCounter{};
        int currentMax = 0;

        for(const int& num: nums){
            if (!sequenceCounter[num]){
                sequenceCounter[num] = sequenceCounter[num+1] + sequenceCounter[num-1] +1; // update new length
                sequenceCounter[num- sequenceCounter[num-1]] = sequenceCounter[num]; // update possible lower start
                sequenceCounter[num+ sequenceCounter[num+1]] = sequenceCounter[num]; // update possible upper start
                currentMax = std::max(currentMax, sequenceCounter[num]);
            }
        }
        return currentMax;
    }
};
