class Solution {
public:
    int search(const vector<int> &nums, const int target) {
        int l = 0;
        int r = static_cast<int>(nums.size()) - 1;

        while (l <= r) {
            int middle = l + (r - l) / 2;

            if (nums[middle] > target) {
                r = middle - 1;
            } else if (nums[middle] < target) {
                l = middle + 1;
            } else {
                return middle;
            }
        }
        
        return -1;
    }
};
