#include "stl.hpp"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*! @brief   目标值 -> 索引 */
        std::map<int, int> table;

        for (auto i = 0; i != nums.size(); ++i) {
            auto iter = table.find(nums[i]);
            if (iter != table.end()) {
                return { iter->second, i };
            }
            table[target - nums[i]] = i;
        }

        return { 0,0 };
    }
};
