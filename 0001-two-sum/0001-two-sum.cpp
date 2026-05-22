class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {

            int required = target - nums[i];

            // Check if required number already exists
            if(mp.find(required) != mp.end()) {
                return {mp[required], i};
            }

            // Store current number with index
            mp[nums[i]] = i;
        }

        return {};
    }
};