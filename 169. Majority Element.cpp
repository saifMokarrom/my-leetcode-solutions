class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        for (auto it: nums){
            ans[it]++;
        }
        
        for (auto it: ans){
            if (it.second > (nums.size()/2)) {return it.first;}
        }
        
        return -1;
    }
};
