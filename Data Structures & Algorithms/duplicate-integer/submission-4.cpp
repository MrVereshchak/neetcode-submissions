class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
        
        // std::unordered_set<int> n;

        // for (const int& num: nums) {
        //     if (n.count(num)){
        //         return true;
        //     }
        //     n.insert(num);
        // }

        // return false;
    }
};