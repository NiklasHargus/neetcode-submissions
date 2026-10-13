class Solution {
public:
    using car = std::pair<int, int>;

    double calcArrivalTime(car ccar, double target){
        return (target-ccar.first) / ccar.second;
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<car> pairs{};
        for(int i = 0; i<position.size(); i++){
            pairs.push_back({position[i], speed[i]});
        }
        std::sort(pairs.rbegin(), pairs.rend());

        std::stack<double> sstack{};
        for(const auto& c: pairs){
            if(sstack.empty()) {sstack.push(calcArrivalTime(c, target)); continue;}
            double old_arrival_time = sstack.top();
            double new_arrival_time = calcArrivalTime(c, target);
            if(old_arrival_time >= new_arrival_time) continue;
            sstack.push(new_arrival_time);
        }
        return sstack.size();
    }
};
