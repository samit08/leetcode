#include <vector>
#include <algorithm>

class Solution {
public:
    int carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        int n = speed.size();
        int cnt = 0;
        std::vector<std::pair<int, double>> cars;

        for (int i = 0; i < n; ++i) {
            cars.push_back({position[i], static_cast<double>(target - position[i]) / speed[i]});
        }

        std::sort(cars.begin(), cars.end(), std::greater<std::pair<int, double>>());

        double curr_time = 0;

        for (int i = 0; i < n; i++) {
            if (cars[i].second > curr_time) {
                curr_time = cars[i].second;
                cnt++;
            }
        }

        return cnt;
    }
};
