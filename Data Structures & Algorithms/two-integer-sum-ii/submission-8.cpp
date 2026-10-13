class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto left = numbers.begin();
        auto right = numbers.end();
        right--;

        while(true){
            int currentSum = *left + *right;

            if(currentSum == target){
                auto start = numbers.begin();
                int a = std::distance(start, left)+1;
                int b = std::distance(start,right)+1;
                return{a, b}; // wrong needs index
            }

            if(currentSum > target){
                right--;
                continue;
            }
            left++;
        }



        
    }
};
