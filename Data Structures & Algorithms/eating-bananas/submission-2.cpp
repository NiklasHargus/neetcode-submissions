class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *std::max_element(piles.begin(), piles.end());
        int res = r;

        while(l <= r){
            int m = l + (r - l) / 2;
            int total_time = 0;

            for(const double& pile: piles){
                total_time += std::ceil(pile / m);
            }

            if (total_time <= h){
                res = m;
                r = m-1;
                continue;
            }
            l = m+1;
        }
        return res;
    }
};
