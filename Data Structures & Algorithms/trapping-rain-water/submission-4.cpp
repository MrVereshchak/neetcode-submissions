class Solution {
public:
    int trap(const vector<int> &height) {
        size_t l = 0;
        size_t r = height.size() - 1;
        int maxL = height[l];
        int maxR = height[r];
        int totalWaterVolume = 0;

        while (l < r) {
            if (maxR < maxL) {
                --r;
                maxR = max(maxR, height[r]);
                totalWaterVolume += maxR - height[r];
            } else {
                ++l;
                maxL = max(maxL, height[l]);
                totalWaterVolume += maxL - height[l];
            }
        }

        return totalWaterVolume;
    }
};
