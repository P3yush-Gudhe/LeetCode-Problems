class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int num : nums) {

            // If already exists
            if(st.find(num) != st.end()) {
                return true;
            }

            // Insert into set
            st.insert(num);
        }

        return false;
    }
};