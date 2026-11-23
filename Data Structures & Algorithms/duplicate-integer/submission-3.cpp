class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        for(auto num : nums) {
            st.emplace(num);
        }
        return st.size() < nums.size() ? true : false;
    }
};
