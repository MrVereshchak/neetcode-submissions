class Solution {
public:
    struct Bar {
        size_t index;
        int height;
    };

    int largestRectangleArea(const vector<int> &heights) {
        int maxArea = 0;
        stack<Bar> bars;

        for (size_t i = 0; i < heights.size(); ++i) {
            size_t start = i; // remembers how far left the current bar can extend
            while (!bars.empty() && bars.top().height > heights[i]) {
                maxArea = max(maxArea, static_cast<int>(bars.top().height * (i - bars.top().index)));
                start = bars.top().index;
                bars.pop();
            }
            bars.push({start, heights[i]});
        }

        while(!bars.empty()) {
            maxArea = max(maxArea, static_cast<int>(bars.top().height * (heights.size() - bars.top().index)));
            bars.pop();
        }

        return maxArea;
    }
};
