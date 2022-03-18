
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> containsKeysIdx;
        set<int> result;

        for(int i=0;i<nums.size();i++){
            if (nums[i] == key) containsKeysIdx.push_back(i);
        }

        for (auto it=containsKeysIdx.begin(); it!= containsKeysIdx.end(); it++){
            int start,end;
            if (*it - k < 0) start = 0;
            else start = *it-k;
            if (*it + k > nums.size()-1) end = nums.size()-1;
            else end = *it + k;

            for ( ;start <= end; start++){
                //if (find(result.begin(),result.end(), start) == result.end())
                result.insert(start);
            }

        }
        vector<int> v(result.begin(),result.end());
        return v;
    }
};
