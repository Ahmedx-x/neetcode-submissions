class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> res(2);
        for (int i=0; i<nums.size(); i++) {
            mp[nums[i]] = i;
        }
        for (int i=0; i<nums.size(); i++) {
            int x = target - nums[i];
            if (mp.find(x) != mp.end() && mp[x] != i) {
                res[0] = i, res[1] = mp[x];
                break;
            }
        }
        return res;
    }
};
