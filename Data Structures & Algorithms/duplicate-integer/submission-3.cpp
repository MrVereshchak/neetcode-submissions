class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> n;

        for (const int& num: nums) {
            if (n.count(num)){
                return true;
            }
            n.insert(num);
        }

        return false;
    }
};