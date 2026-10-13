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
                std::cout << start << '\n';
                auto a = &(*left);
                auto b = &(*right);
                std::cout << a << '\n';
                std::cout << a << '\n';
                //std::cout << a/sizeof(int*) << '\n';
                return{static_cast<int>(a-start+1),static_cast<int>(b-start+1)}; // wrong needs index
            }

            if(currentSum > target){
                right--;
                continue;
            }
            left++;
        }



        
    }
};
