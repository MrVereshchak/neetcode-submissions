class Solution {
public:
    int carFleet(const int target, const vector<int> &position, const vector<int> &speed) {
        int fleets = 0;
        map<int, int> cars;
        double latestFleetEta = 0.0;

        for (size_t i = 0; i < position.size(); ++i) {
            cars[position[i]] = speed[i];
        } 

        for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
            const auto &[carPosition, carSpeed] = *it;
            const double eta = static_cast<double>(target - carPosition) / carSpeed;

            if (eta > latestFleetEta) {
                ++fleets;
                latestFleetEta = eta;
            }
        }

        return fleets;
    }
};
