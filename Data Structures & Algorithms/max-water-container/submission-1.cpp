class Solution {
public:
    int maxArea(vector<int>& heights) {
        int currentMax = 0;
        int left = 0;
        int right = heights.size()-1;

        while(left < right){
            int lower_height = std::min(heights[left], heights[right]);
            int current = lower_height * (right-left);
            currentMax = std::max(currentMax, current);

            if(heights[left] <= heights[right]){ left++; continue;}
            right--;
        }
        return currentMax;
    }
};
