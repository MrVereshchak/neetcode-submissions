class Solution {
public:
    int maxArea(const vector<int> &heights) {
        int l = 0;
        int r = static_cast<int>(heights.size()) - 1;
        int maxArea = 0;

        while (l < r) {
            int shorter = min(heights[l], heights[r]);
            int currArea = shorter * (r - l);

            maxArea = max(maxArea, currArea);

            if (heights[l] < heights[r]) {
                ++l;
            } else {
                --r;
            }
        }

        return maxArea;
    }
};
