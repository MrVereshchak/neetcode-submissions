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
                totalWaterVolume += max(maxR - height[r], 0);
                maxR = max(maxR, height[r]);
            } else {
                ++l;
                totalWaterVolume += max(maxL - height[l], 0);
                maxL = max(maxL, height[l]);
            }
        }

        return totalWaterVolume;
    }
};
