class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> n;

        for (int num: nums) {
            if (n.find(num) != n.end()){
                return true;
            }
            n.insert(num);
        }

        return false;
    }
};