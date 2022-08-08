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


/*
O(n) and space complexity: 0(1)
moors voting algorithm


public class Solution {
    public int majorityElement(int[] num) {

        int major=nums[0], count = 1;
        for(int i=1; i<nums.size();i++){
            
            if(major==nums[i]){
                count++;
            }else count--;
            if(count==0){
                count++;
                major=nums[i];
            }
        }
        return major;
    }
}
*/
