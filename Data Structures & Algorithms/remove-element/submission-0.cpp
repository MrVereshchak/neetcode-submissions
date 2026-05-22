class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto beg = nums.begin(); beg != nums.end();) {
            if (*beg == val) {
                beg = nums.erase(beg);
            }
            else {
                ++beg;
            }
        }

        return nums.size();
    }
};