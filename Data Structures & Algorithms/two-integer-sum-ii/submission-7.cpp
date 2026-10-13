class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto left = numbers.begin();
        auto right = numbers.end();
        right--;

        while(true){
            int currentSum = *left + *right;

            if(currentSum == target){
                int *start = &numbers[0];
                int *a = std::to_address(left);
                int *b = std::to_address(right);
                int diffA = a-start+1;
                int diffB = b-start+1;
                return{diffA,diffB}; // wrong needs index
            }

            if(currentSum > target){
                right--;
                continue;
            }
            left++;
        }



        
    }
};
